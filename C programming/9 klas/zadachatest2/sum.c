#include <stdio.h>
#include "helpers.h"
#include <stdlib.h>

int main(int argc,char *argv[]){
	int N = atoi(argv[1]);
	int result = sum(N);
	printf("The sum 1 to N is: %d", result);
	return 0;
}