/**
 * @file negativeBorderColorPicker.cpp
 * @description Implements the NegativeBorderColorPicker constructor and () function
 *              for CPSC 221 2023S PA2
 *
 *              THIS FILE WILL BE SUBMITTED
 */
 
#include "negativeBorderColorPicker.h"
#include <math.h>

NegativeBorderColorPicker::NegativeBorderColorPicker(PNG& inputimg, PixelPoint src_px, unsigned int width, double tol)
{
    // Complete your implementation below
    referenceimg = inputimg;
    source_px = src_px;
    borderwidth = width;
    tolerance = tol;
}

/**
 * Picks the color for pixel (x, y).
 *
 * Leaves a pixel unchanged if it is not on the border of a fill region
 *
 * If a pixel is on the border of a fill region, change it to the "negative"
 * of the original colour value in the Hue and Luminance channels.
 * Saturation and Alpha should remain unchanged.
 * Based on your understanding of HSL colour space from Lab_intro,
 * think about what would be an appropriate "negative" transformation for the
 * Hue and Luminance channels.
 *
 * Hint: a pixel is on the border of a fill region, if it is within "width"
 * pixels of a pixel which is NOT in the fill region!
 * 
 * Also: the border of the image is considered to be a border of the fill region.
 */
HSLAPixel NegativeBorderColorPicker::operator()(PixelPoint p)
{
    if (isBorderPixel(p)) {
        HSLAPixel res = HSLAPixel(p.color.h, p.color.s, p.color.l, p.color.a);
                        
        res.h = fmod(180 + referenceimg.getPixel(p.x, p.y)->h, 360);
        res.s = referenceimg.getPixel(p.x, p.y)->s;
        res.l = 1.0 - referenceimg.getPixel(p.x, p.y)->l;
        res.a = referenceimg.getPixel(p.x, p.y)->a;
                        
        return res;
    }
    return *referenceimg.getPixel(p.x, p.y);
}

/**
 * Add your private QuarterColorPicker function implementations below
 */

bool NegativeBorderColorPicker::isBorderPixel(PixelPoint p) {
    for (int x = 0; x < borderwidth * 2 + 1; x++) {
        for (int y = 0; y < borderwidth * 2 + 1; y++) {
            int distX = x - borderwidth;
            int checkX = p.x + distX;
            int distY = y - borderwidth;
            int checkY = p.y + distY;

            if (!((distX * distX) + (distY * distY) > borderwidth * borderwidth) && 
                !(checkX == p.x && checkY == p.y) &&
                ((checkX < 0 || checkX >= referenceimg.width()) ||
                 (checkY < 0 || checkY >= referenceimg.height()) ||
                 (referenceimg.getPixel(checkX, checkY)->distanceTo(source_px.color) > tolerance))) 
                return true;
        }
    }
    return false;
}