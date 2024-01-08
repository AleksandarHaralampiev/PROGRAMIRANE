#include <stdio.h>
#include <limits.h>

struct type_info {
    char* type_name;
    char* print_format;
    size_t size;
    long long min;
    unsigned long long max;
    char* unsigned_print_format;
    unsigned long long unsigned_max;
};

int main(){
    struct type_info types[] = {
        {"char", "%c", sizeof(char), CHAR_MIN, CHAR_MAX, "%c", UCHAR_MAX},
        {"short", "%hd", sizeof(short), SHRT_MIN, SHRT_MAX, "%hu", USHRT_MAX},
        {"int", "%d", sizeof(int), INT_MIN, INT_MAX, "%u", UINT_MAX},
        {"long", "%ld", sizeof(long), LONG_MIN, LONG_MAX, "%lu", ULONG_MAX},
        {"long long", "%lld", sizeof(long long), LLONG_MIN, LLONG_MAX, "%llu", ULLONG_MAX}
    };

    printf("%-15s %-15s %-15s %-15s %-15s %-15s %-15s %-15s\n", "Type", "Print format", "Size", "Min", "Max", "Unsigned format", "Unsigned max");
    for (int i = 0; i < sizeof(types) / sizeof(types[0]); i++){
        printf("%-15s %-15s %-15zu %-15lld %-15llu %-15s %-15llu\n", types[i].type_name, types[i].print_format, types[i].size, types[i].min, types[i].max, types[i].unsigned_print_format, types[i].unsigned_max);
    }
    return 0;
}