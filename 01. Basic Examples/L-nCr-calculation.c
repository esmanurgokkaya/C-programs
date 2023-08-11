#include <stdio.h>
#include <stdlib.h>

int fact (int value){
	if (value == 0 || value == 1){
		return 1;
	}
	else
		return value * fact(value - 1);
}


int main(int argc, char *argv[]) {
	int n, r, result = 1;
	
	printf("Please enter a number!\n");
	scanf("%d",&n);

	printf("Please enter a 'r' value!\n");
	scanf("%d",&r);
	
	result = fact(n) / (fact(r) * fact(n - r));
	printf("The result of nCr is %d",result);
	
	return 0 ;
}