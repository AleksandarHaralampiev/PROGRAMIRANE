#include <stdio.h>

unsigned char diodes = 97;

void print_diodes() {
    for (int i = 0; i < 8; i++) {
        printf("Diode %d is %s\n", i+1, ((diodes >> i) & 1) ? "on" : "off");
    }
}

int main() {
    print_diodes();
    return 0;
}