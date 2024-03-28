//alias of types 

#include <stdio.h>



typedef unsigned const long long ucll;

ucll sumDistance(
    ucll distance1,
    ucll distance2
){
    return distance1 + distance2;
}

int main(){
    ucll d1 = 10;
    ucll d2 = 20;
    ucll sum = sumDistance(d1, d2);
    printf("Sum of distances: %llu\n", sum);


    
    
    
    
    
    return 0;
}