#include "mbed.h"

InterruptIn up(p15);
InterruptIn down(p12);
InterruptIn left(p13);
InterruptIn right(p16);
InterruptIn center(p14);

void joystick_interrupt_up() {
    printf("Joystick Up\n");
}

void joystick_interrupt_down() {
    printf("Joystick Down\n");
}

void joystick_interrupt_left() {
    printf("Joystick Left\n");
}

void joystick_interrupt_right() {
    printf("Joystick Right\n");
}

void joystick_interrupt_center() {
    printf("Joystick Center\n");
}

int main() {
    up.fall(&joystick_interrupt_up);
    down.fall(&joystick_interrupt_down);
    left.fall(&joystick_interrupt_left);
    right.fall(&joystick_interrupt_right);
    center.fall(&joystick_interrupt_center);

    while(1) {
        // Do nothing
    }
}
