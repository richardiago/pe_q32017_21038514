#include <stdio.h>

int main() {

	int x, k, i=0, j=1, t;
	
	printf("Digite um inteiro: ");
	scanf("%d", &x);
	
	if (x == 0) {
		printf("%d ", 0);
	}
	else if (x == 1) {
		printf("%d %d", 0, 1);
	}
	
	else{
	
		printf("%d %d ", 0, 1);
		
		for (k=0; k<x-1; k++) {
		
			t = i+j;
			i = j;
			j = t;
		
			printf("%d ", j);
		}	
	}
	
	printf("\n");
	return 0;
}
		
			

