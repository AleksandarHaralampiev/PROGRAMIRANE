#include "transformation.h"
#include <stdlib.h>
#include <string.h>

Transformation stringToLong(const char* str) {
    Transformation trans;
    trans.result = 0;
    strcpy(trans.error, "\0");

    char* end;
    long res = strtol(str, &end, 10);

    if (end == str || *end != '\0') {
        strcpy(trans.error, "Invalid input string");
    } else {
        trans.result = res;
    }

    return trans;
}