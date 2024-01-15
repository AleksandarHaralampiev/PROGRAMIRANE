#ifndef QUADRATICSROOTS_H
#define QUADRATICSROOTS_H


struct QuadraticRootsResult {
    double x1;
    double x2;
    int norealroots;
};

struct QuadraticRootsResult findroots(double a, double b, double c);

#endif