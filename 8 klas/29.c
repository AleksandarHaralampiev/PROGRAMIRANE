//29.Дали дадена буква е гласна или съгласна

#include <stdio.h>
int main()
{
    char input;
    printf("enter a charecter: ");
    scanf("%c", &input);
if((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z')) {
    if(input == 'a' || input == 'o' || input == 'u' || input == 'e' || input == 'i'){
        printf("\nThe following input is a vowel");
    } 
    else{printf("\nThe following input is consonant");}
}
else{printf("\nThe following given charecter is not a letter");}
}
