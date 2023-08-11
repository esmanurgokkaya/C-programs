#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int num, num1, num2;
    
	printf("Please enter three numbers!\n");
	scanf("%d %d %d",&num, &num1, &num2);
	
	if (num > num1 && num > num2 ){
		printf("The largest number is %d",num);
	}
	else if(num1 > num && num1 > num2 ){
		printf("The largest number is %d",num1);
	}
	else if(num2 > num && num2 > num1){
		printf("The largest number is %d",num2);
	}
	else {
		printf("Your numbers is equal");
	}
	
	return 0 ;
}