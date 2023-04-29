#include "mbed.h"

// Initialize InterruptIn objects for Joystick pins
InterruptIn up(p15);
InterruptIn down(p12);
InterruptIn left(p13);
InterruptIn right(p16);
InterruptIn center(p14);

// Define callback functions for each Joystick pin
void up_callback() {
    printf("Joystick pushed up\n");
}

void down_callback() {
    printf("Joystick pushed down\n");
}

void left_callback() {
    printf("Joystick pushed left\n");
}

void right_callback() {
    printf("Joystick pushed right\n");
}

void center_callback() {
    printf("Joystick pushed center\n");
}

int main() {

    // Enable the pull-up resistors on the Joystick pins
    up.mode(PullUp);
    down.mode(PullUp);
    left.mode(PullUp);
    right.mode(PullUp);
    center.mode(PullUp);

    // Configure InterruptIn objects to detect a falling edge
    up.fall(callback(up_callback));
    down.fall(callback(down_callback));
    left.fall(callback(left_callback));
    right.fall(callback(right_callback));
    center.fall(callback(center_callback));

    while(1) {
        // Wait for interrupts
    }
}