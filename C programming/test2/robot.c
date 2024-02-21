#include <stdio.h>

unsigned char diodes = 97;

void print_diodes() {
    for (int i = 0; i < 8; i++) {
        if ((diodes >> i) & 1) {
            printf("Diode %d is on\n", i+1);
        } else {
            printf("Diode %d is off\n", i+1);
        }
    }
}

int main() {
    print_diodes();
    return 0;
}