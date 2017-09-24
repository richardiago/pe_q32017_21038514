#include <stdio.h>

int main() {
	
	int x, i, n = 0;
	
	scanf("%d", &x);
	
	for (i=0; i<=x; i++){
		n +=i;
	}
	
	printf("Soma de 1 a %d = %d\n", x, n);
	
	return 0;
}
