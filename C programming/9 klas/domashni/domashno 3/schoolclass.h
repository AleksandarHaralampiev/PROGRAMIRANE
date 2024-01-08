#ifndef SCHOOLCLASS_H
#define SCHOOLCLASS_H

#include "person.h"

struct SchoolClass {
    struct Person students[26];
    char classLetter;
    int classNumber;
    struct Person classLeader;
};

#endif