#include <stdio.h>

struct Node {
    char* firstname;
    struct Node* father;
    struct Node* mother;
    struct Node* marriedto;
};

int main() {
    struct Node father = {"Хари", NULL, NULL, NULL};
    struct Node mother = {"Кристина", NULL, NULL, NULL};
    struct Node child = {"Александър", &father, &mother, NULL};

    father.marriedto = &mother;
    mother.marriedto = &father;

    printf("Име: %s, Баща: %s, Майка: %s, Съпруг(а): %s\n", child.firstname, child.father->firstname, child.mother->firstname, child.marriedto ? child.marriedto->firstname : "Няма");

    return 0;
}