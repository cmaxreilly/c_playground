#include <CoreGraphics/CoreGraphics.h>

int main(int argc, char* argv[]) {
    // Create a rectangle to define the size and position of the window
    CGRect windowRect = CGRectMake(100, 100, 300, 200);
    
    // Create a window with the specified rectangle and style
    CGWindowRef window = CGWindowCreate(NULL, windowRect, kCGWindowLayerAbove, kCGWindowFlagsTitled, NULL);
    
    // Show the window
    CGWindowListShow(kCGWindowListOptionOnScreenBelowWindow, window);
    
    // Wait for user input
    CFRunLoopRun();
    
    // Clean up
    CGWindowClose(window);
    CFRelease(window);
    
    return 0;
}

