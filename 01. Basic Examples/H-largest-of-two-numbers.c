#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int num1,  num2;
    
	printf("Please enter two number!\n");
	scanf("%d %d",&num1, &num2);
	
	if (num1 > num2){
		printf("The largest number is %d",num1);
	}
	else if(num1 == num2){
		printf("Your numbers is equal");
	}
	else{
		printf("The largest number is %d",num2);
	}
	
	
	return 0 ;
}