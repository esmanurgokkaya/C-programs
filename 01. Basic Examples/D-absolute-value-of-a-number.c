#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int num, ab_num;

	printf("Please enter a number to find absolute value!\n");
	scanf("%d",&num);

	ab_num = abs(num);

	printf("Absolute value of your number is %d",ab_num);
	
    return 0 ;
}