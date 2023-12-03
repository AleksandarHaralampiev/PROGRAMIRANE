#include "transformation.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct transformation StringToLong(char* input)
{
    struct transformation tmp;
    tmp.result = 0;
    int i = 0;
    int sign = 1;
    if (input[0] == '-')
    {
        sign = -1;
        i++;
    }
    for (; i < strlen(input); i++)
    {
        if (input[i] >= '0' && input[i] <= '9')
        {
            tmp.result = tmp.result * 10 + (input[i] - '0');
        }
        else
        {
            tmp.result = 0;
            strcpy(tmp.error, "Invalid input string");
            return tmp;
        }
    }
    tmp.result *= sign;
    strcpy(tmp.error, "\0");
    return tmp;
}