#include <ApplicationServices/ApplicationServices.h>

int main() {
    // Activate Mission Control
    CGEventRef event1 = CGEventCreateKeyboardEvent(NULL, (CGKeyCode)0x6, true); // 0x6 is the Mission Control key
    CGEventPost(kCGSessionEventTap, event1);
    CFRelease(event1);

    // Switch to Desktop 1
    CGEventRef event2 = CGEventCreateKeyboardEvent(NULL, (CGKeyCode)0x12, true); // 0x12 is the key for Desktop 1
    CGEventPost(kCGSessionEventTap, event2);
    CFRelease(event2);

    // Exit Mission Control
    CGEventRef event3 = CGEventCreateKeyboardEvent(NULL, (CGKeyCode)0x6, false);
    CGEventPost(kCGSessionEventTap, event3);
    CFRelease(event3);

    return 0;
}

