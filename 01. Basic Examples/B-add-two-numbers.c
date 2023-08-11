#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int num1, num2, total=0;
	
    printf("Please enter two number!\n");
	scanf("%d %d",&num1, &num2);
	
    total = num1 + num2;
	
    printf("Your numbers total is %d",total);
	
    return 0 ;
}