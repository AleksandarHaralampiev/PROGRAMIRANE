/*
Направете заглавен файл “mystrings.h”, който да декларира 3 функции, които да работят със символни низове. 
Първата функция (strlength) трябва да намира дължината на символен низ, втората (strconcat) да слива два символни низа в първия подаден като аргумент на функцията, третата функция (strcompare)
 трябва да сравнява лексикално два символни низа (да връща -1 ако първия стринг се намира лексикално преди втория, 0 - ако двата символни низа за еднакви и 1 ако първия символен низ се намира след втория). 
 Пример за strlength: Вход: “Ivan” => Изход: 4. Пример за strconcat: Вход: str1=Hello, str2=World => strconcat(str1, str2) => Изход: str1=HelloWorld, str2=World. Пример за strcompare:
 Вход: “Alex”, “Alan” => Изход: 1, вход: “Alex”, “Alex” => Изход: 0, вход “Alex”, “Boyan” => Изход: -1. Направете сорс файл mystrings.c, който да вмъква заглавния файл “mystrings.h” и да дефинира функциите (да ги имплементира). 
Добавете в Makefile-a от първа задача цел, която се казва mystrings.o която да компилира модула до обектен файл. Променете clean целта така че да изчиства и обектните файлове.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mystrings.h"

int strlenght(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

void strconcat(char *str1, char *str2) {
    int i = 0;
    int j = 0;
    while (str1[i] != '\0') {
        i++;
    }
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
}

int strcompare(char *str1, char *str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] > str2[i]) {
            return 1;
        }
        if (str1[i] < str2[i]) {
            return -1;
        }
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0') {
        return 0;
    }
    if (str1[i] == '\0') {
        return -1;
    }
    return 1;
}
/*
int main(){
    char str1[100];
    char str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    printf("strlength of %s is %d\n", str1, strlenght(str1));
    printf("strconcat of %s and %s is ", str1, str2);
    strconcat(str1, str2);
    printf("%s\n", str1);
    printf("strcompare of %s and %s is %d\n", str1, str2, strcompare(str1, str2));
    return 0;
}*/