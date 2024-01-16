#include "sum.h"

static long sum = 0;
static int n = 1;

static long nextfactoriel() {
    long fact = 1;
    for(int i = 1; i <= n; ++i) {
        fact *= i;
    }
    n++;
    return fact;
}

void addfactrieltosum() {
    sum += nextfactoriel();
}

long getSum() {
    return sum;
}