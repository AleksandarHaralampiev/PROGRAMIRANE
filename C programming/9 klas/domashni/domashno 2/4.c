#include <stdio.h>

#define COMMAND(NAME, TYPE) TYPE ## _ ## NAME ## _command

#define DEFINE_COMMAND(NAME, TYPE) void COMMAND(NAME, TYPE)(void)

DEFINE_COMMAND(quit, external) {
    printf("external_quit_command called.\n");
}

DEFINE_COMMAND(quit, internal) {
    printf("internal_quit_command called.\n");
}

int main() {
    external_quit_command();
    internal_quit_command();
    
    return 0;
}