#include <stdio.h>

int main() {

	int valor, op, aux=1, i=1, j, x=0 ;
	
	scanf("%d %d", &valor, &op);
	
	if (op == 1) {
		
		while (valor!=0) {
		
			x += (valor%2) *i;
			i *= 10;
			valor /=2;		
		
		}
		
		printf("%d\n", x);

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
