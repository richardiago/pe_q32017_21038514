#include <stdio.h>

int main() {

	int valor, op, aux=1, i, j, x=0 ;
	int bin[50];
	
	/*limpar vetor*/
	for(i=0; i<50; i++) {
		bin[i] = 5;
	}
	
	scanf("%d %d", &valor, &op);
	
	if (op == 1) {
		
		for (i=0; valor>0; i++) {
			
			if (valor%2 == 0) {
				bin[i] = 0;
			}
			
			else {
				bin[i] = 1;
			}
			
			valor/=2;
		}
		
		for (i=49; i>=0; i--) {
		
			if (bin[i] != 5) {
				printf("%d", bin[i]);
			}
		}
		
		printf("\n");

	}
		
	else if (op == 2) {
	
		for (i = 0; valor > 0; i++) {
			
			if (valor%10 == 1) {
				
				for(j = 0; j<i; j++) {
					aux *=2;			
				}
				
				x += aux;		
			}
			
			valor /=10;		
		}
	
		printf("%d\n", x);
	}


	return 0;

}
