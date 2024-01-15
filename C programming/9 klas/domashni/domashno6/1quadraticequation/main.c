#include <stdio.h>
#include "quadraticroots.h"
#include <stdlib.h>

int main(int argc, char **argv) {
    if (argc != 4) {
        printf("error");
        return 1;
    }
    struct QuadraticRootsResult result = findroots(atof(argv[1]), atof(argv[2]), atof(argv[3]));
    if (result.norealroots) {
        printf("No real roots\n");
    } else {
        printf("Roots: %.2Lf, %.2Lf\n", result.x1, result.x2);
    }
    return 0;
}
