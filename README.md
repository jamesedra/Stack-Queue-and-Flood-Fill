## Stack-Queue-and-Flood-Fill

# Project Overview
This repository contains my solution to Programming Assignment 2 (PA2) for CPSC 221 at UBC. The assignment focuses on implementing the Stack and Queue classes and exploring flood fill algorithms. The assignment also aims to improve C++ skills, including the use of templates and inheritance.

The assignment is divided into two parts:

Part 1: The Stack and Queue Classes: In this part, I have implemented the Stack and Queue classes with additional functions like Peek(). The Stack class is implemented in stack.cpp, and the Queue class is implemented in queue.cpp. Both classes adhere to the specifications mentioned in the provided code, and the running times of each function are as described.

Part 2: Flood Fill: In this part, I have implemented various flood fill functions that operate on a PNG image. The flood fill algorithm fills a region of the image with a specified color or pattern. I have implemented two different fill algorithms: depth-first-search (DFS) and breadth-first-search (BFS), along with three different fill patterns. The fill patterns include ImageTileColorPicker, QuarterColorPicker, and NegativeBorderColorPicker. Each pattern is implemented as a functor derived from the abstract base class ColorPicker. The implementation details for each function can be found in filler.cpp.

# Project Structure

The repository contains the following files which contains my solution:

    stack.cpp            // Implementation of the Stack class
    queue.cpp            // Implementation of the Queue class
    filler.cpp           // Implementation of flood fill functions
    imageTileColorPicker.cpp        // Implementation of ImageTileColorPicker
    quarterColorPicker_private.h    // Private header file for QuarterColorPicker
    quarterColorPicker.cpp          // Implementation of QuarterColorPicker
    negativeBorderColorPicker_private.h   // Private header file for NegativeBorderColorPicker
    negativeBorderColorPicker.cpp         // Implementation of NegativeBorderColorPicker
    
 # Flood Fill Examples:
 
Image Tiling (BFS):

![bfsimagetile](https://github.com/jamesedra/Stack-Queue-and-Flood-Fill/assets/107374254/aba5b62b-9e9a-4d5b-90eb-c2016af15aa7)

Image Tiling (DFS):

![dfsimagetile](https://github.com/jamesedra/Stack-Queue-and-Flood-Fill/assets/107374254/498e2167-4d74-4375-a825-fd4aef45027b)

Adding Borders using their Negative Colors (BFS):

![bfsnegativeborder](https://github.com/jamesedra/Stack-Queue-and-Flood-Fill/assets/107374254/265491e4-4d10-42aa-a679-357d565d6c8d)

Adding Borders using their Negative Colors (DFS):

![dfsnegativeborder](https://github.com/jamesedra/Stack-Queue-and-Flood-Fill/assets/107374254/ae6a7d2a-afd5-44d6-a636-ce5ced51d8b2)





