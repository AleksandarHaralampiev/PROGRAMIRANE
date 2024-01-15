#include <stdio.h>
#include <limits.h>


void print_info(char* type, char* format, size_t size, long long int min, long long int max, char* u_format, unsigned long long int u_max) {
    printf("| %-10s | %-10s | %-10zu | %-20lld | %-20lld | %-10s | %-20llu |\n", 
           type, format, size, min, max, u_format, u_max);
}

int main() {
    printf(" ________________________________________________________________________________________________________________________ \n");
    
    printf("| %-10s | %-10s | %-10s | %-20s | %-20s | %-10s | %-20s |\n", 
           "Type", "Format", "Size", "Min", "Max", "U Format", "U Max");
    printf("|------------|------------|------------|----------------------|----------------------|------------|----------------------|\n");


    print_info("char", "%c", sizeof(char), CHAR_MIN, CHAR_MAX, "%c", UCHAR_MAX);
    print_info("short", "%zu", sizeof(short), SHRT_MIN, SHRT_MAX, "%hu", USHRT_MAX);
    print_info("int", "%d", sizeof(int), INT_MIN, INT_MAX, "%u", UINT_MAX);
    print_info("long", "%ld", sizeof(long), LONG_MIN, LONG_MAX, "%lu", ULONG_MAX);
    print_info("long long", "%lld", sizeof(long long), LLONG_MIN, LLONG_MAX, "%llu", ULLONG_MAX);
    printf("|________________________________________________________________________________________________________________________|\n");

    return 0;
}