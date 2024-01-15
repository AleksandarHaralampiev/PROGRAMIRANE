#include "counter.h"
#include <stdio.h>

extern long sum = 0;

static long nextodd() {
    static long current = -1;
    current += 2;
    return current;
}

void addoddtosum() {
    sum += nextodd();
}
