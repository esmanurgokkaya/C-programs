#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int num, cube;

	printf("Please enter a number to calculate cube!\n");
	scanf("%d",&num);

	cube = num * num * num;

	printf("Cube of your number is %d ",cube);
    
	return 0 ;
}