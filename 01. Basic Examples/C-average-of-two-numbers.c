#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int num1, num2, average = 1;

	printf("Please enter two numbers!\n");
	scanf("%d %d",&num1, &num2);
	
    average = (num1 + num2) / 2;
	
    printf("Your numbers average is %d",average);
	
	return 0 ;
}