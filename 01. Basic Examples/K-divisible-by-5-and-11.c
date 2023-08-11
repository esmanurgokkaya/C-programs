#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int num ;
    
	printf("Please enter a number!\n");
	scanf("%d",&num);
	
	if( num % 5 == 0 && num % 11 == 0){
		printf("Your number is divisible by 5 and 11");
		
	}
	else {
		printf("Your number is not divisible by 5 and 11");
	}

	return 0 ;
}