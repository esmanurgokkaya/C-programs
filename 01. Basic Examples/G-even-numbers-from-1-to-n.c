#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int num, i;
    
	printf("Please enter a number to print from 1 to n!\n");
	scanf("%d",&num);

	printf("Even numbers\n");

	for(i=1 ; i <= num ; i++){
		if(i == 1 || i % 2 == 0){
			printf(">>%d\n",i);
		}
	}

	return 0 ;
}