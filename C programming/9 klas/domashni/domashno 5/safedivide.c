#include "safeint.h"
#include "util.h"
#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        print_usage();
        return 1;
    }
    struct SafeResult a = safestrtoint(argv[1]);
    struct SafeResult b = safestrtoint(argv[2]);
    if (a.errorflag || b.errorflag) {
        print_overflow();
        return 1;
    }
    struct SafeResult res = safedivide(a.value, b.value);
    if (res.errorflag) {
        print_overflow();
        return 1;
    }
    printf("%d\n", res.value);
    return 0;
}