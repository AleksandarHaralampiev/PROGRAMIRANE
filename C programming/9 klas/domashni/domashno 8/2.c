#include <stdio.h>
#include <string.h>

int main(void){
    char str[255];
    printf("Enter a string:\n");
    fgets(str, 255, stdin);
    printf("youve entered :%s\nwithout removing the newline\n" ,str);
    printf("test\n");

    char *newline = strchr(str, '\n');//strchr - 
    if (newline != NULL) {
        *newline = '\0';
    }

    printf("You entered: %s", str);
    printf("test");



    


    return 0;
}