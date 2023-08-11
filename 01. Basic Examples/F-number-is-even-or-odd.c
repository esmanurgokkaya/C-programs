#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int num ;

	printf("Please enter a  number!\n");
	scanf("%d",&num);
	
	if (num % 2 == 0){
		printf("Your number is even");
		
	}
	else{
		printf("Your number is odd");
	}
	
	return 0 ;
}