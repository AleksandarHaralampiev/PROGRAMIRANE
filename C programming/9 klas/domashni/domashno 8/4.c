#include <stdio.h>
#include <string.h>


int compareasc(const void *const a, const void *const b){
    if(*(const int*) a > *(const int*) b) return 1;
    else if(*(const int*) a < *(const int*) b) return -1;
    else return 0;
}

int comparedesc(const void *const a, const void *const b){
    if(*(const int*) a > *(const int*) b) return -1;
    else if(*(const int*) a < *(const int*) b) return 1;
    else return 0;
}

int main(){
    const void
}