#include <stdio.h>

int main() {

	int x,y, i, pot=1;
	printf("Digite inteiros x e y: ");
	scanf("%d %d", &x, &y);
	
	for (i=0; i<y; i++){
		
		pot*=x;
	}
	
	printf("%d\n", pot);
	
	return 0;
	
}
