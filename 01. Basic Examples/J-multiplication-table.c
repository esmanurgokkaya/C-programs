#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int i, j;
	
	printf("\t\t\tMultiplication Table\n");
	
	for(i=1 ; i <= 10 ; i++){
		for(j=1 ; j <= 10 ; j++){
			printf("%dx%d=%d\t",j, i, i*j);
			
		}
		printf("\n");
	}
	
	return 0 ;
}