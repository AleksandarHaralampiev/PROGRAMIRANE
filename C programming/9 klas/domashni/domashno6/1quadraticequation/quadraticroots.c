#include "quadraticroots.h"
#include <math.h>

struct QuadraticRootsResult findroots(double a, double b, double c) {
    struct QuadraticRootsResult result;
    double discriminant = b * b - 4 * a * c;
    if (discriminant < 0) {
        result.norealroots = 1;
    } else {
        result.norealroots = 0;
        result.x1 = (-b + sqrt(discriminant)) / (2 * a);
        result.x2 = (-b - sqrt(discriminant)) / (2 * a);
    }
    return result;
}