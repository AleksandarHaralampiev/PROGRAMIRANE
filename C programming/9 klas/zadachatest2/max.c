#include <stdio.h>
#include "helpers.h"
#include <stdlib.h>

int main(int argc,char *argv[]){
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int result = MAX(a,b);
	printf("The bigger of the two numbers is %d" ,result);
	return 0;
}
