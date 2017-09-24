#include <stdio.h>

int main() {

	int x, y, i, sq=0, qs=0;
	
	scanf("%d %d", &x, &y);
	
	/*soma dos quadrados sq*/
	
	for (i = x; i <= y; i++) {
		
		sq = sq + i*i;
	}
	
	/*quadrado da soma qs*/
	
	for (i = x; i <= y; i++) {
	
		qs = qs + i;
	}
	
	qs *= qs;


	printf("soma dos quadrados = %d\nquadrado da soma = %d\ndiferenca = %d\n", sq, qs, qs-sq);

	return 0;
}


