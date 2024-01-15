#include "safeint.h"
#include <limits.h>

struct SafeResult safeadd(int a, int b) {
    struct SafeResult res;
    if ((b > 0 && a > INT_MAX - b) || (b < 0 && a < INT_MIN - b)) {
        res.errorflag = 1;
    } else {
        res.value = a + b;
        res.errorflag = 0;
    }
    return res;
}

struct SafeResult safesubtract(int a, int b) {
    struct SafeResult res;
    if ((b > 0 && a < INT_MIN + b) || (b < 0 && a > INT_MAX + b)) {
        res.errorflag = 1;
    } else {
        res.value = a - b;
        res.errorflag = 0;
    }
    return res;
}



struct SafeResult safemultiply(int a, int b) {
    struct SafeResult res;
    if ((b > 0 && a > INT_MAX / b) || (b < 0 && a < INT_MIN / b)) {
        res.errorflag = 1;
    } else {
        res.value = a * b;
        res.errorflag = 0;
    }
    return res;
}

struct SafeResult safedivide(int a, int b) {
    struct SafeResult res;
    if (b == 0) {
        res.errorflag = 1;
    } else {
        res.value = a / b;
        res.errorflag = 0;
    }
    return res;
}

struct SafeResult safestrtoint(char* str) {
    struct SafeResult res;
    int i = 0;
    int sign = 1;
    int value = 0;
    if (str[0] == '-') {
        sign = -1;
        i++;
    }
    while (str[i] != '\0') {
        if (str[i] < '0' || str[i] > '9') {
            res.errorflag = 1;
            return res;
        }
        if (value > INT_MAX / 10 || (value == INT_MAX / 10 && str[i] - '0' > INT_MAX % 10)) {
            res.errorflag = 1;
            return res;
        }
        value = value * 10 + str[i] - '0';
        i++;
    }
    res.value = sign * value;
    res.errorflag = 0;
    return res;
}