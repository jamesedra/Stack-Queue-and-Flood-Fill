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

![bfsimagetile](https://github.com/jamesedra/Stack-Queue-and-Flood-Fill/assets/107374254/5fa49fac-17db-433a-97df-c988ab9a3146)

Image Tiling (DFS):

![dfsimagetile](https://github.com/jamesedra/Stack-Queue-and-Flood-Fill/assets/107374254/dafcda03-4b0c-42d8-910a-6c2e4094a919)

Adding Borders using their Negative Colors (BFS):

![bfsnegativeborder](https://github.com/jamesedra/Stack-Queue-and-Flood-Fill/assets/107374254/1073c62c-6d2a-4a77-bc1a-205c6b9ed007)

Adding Borders using their Negative Colors (DFS):

![dfsnegativeborder](https://github.com/jamesedra/Stack-Queue-and-Flood-Fill/assets/107374254/4b199c8c-4b5e-4dfb-b496-d95b69dfd6f2)

