#include "schoolclass.h"
#include "schoolroom.h"

struct School {
    struct SchoolClass classes[20];
    struct SchoolRoom rooms[10];
};

int main() {
    struct School school;

    strcpy(school.classes[0].students[0].firstName, "Aleksandar");
    strcpy(school.classes[0].students[0].lastName, "Haralampiev");
    school.classes[0].students[0].birthYear = 2008;

    return 0;
}