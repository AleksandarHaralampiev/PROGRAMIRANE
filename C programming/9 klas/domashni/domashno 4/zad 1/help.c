/*
Направете програма, която да принтира на екрана помощно меню, което да дава информация за това как се работи с приложението, което ще реализирате с това домашно. 
Когато програмата се стартира трябва на екрана да се покажат имената на три функции “strlength, strconcat и strcompare и срещу всяка една от тях информация какво прави тя.
 Първата функция strlength трябва да намира дължината на символен низ. Втората функция strconcat трябва да обединява два символни низа. 
 Третата функция strcompare трябва да сравнява два символни низа. 
 Направете Makefile който да се състои от две цели: “help.out” (под windows help.exe”), която да построява приложението  и от целта “clean”, която да изчиства файловете получени по време на компилация на приложението.
*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

int main() {
    printf("strlength - finds the length of a string\n");
    printf("strconcat - concatenates two strings\n");
    printf("strcompare - compares two strings\n");
    return 0;
}