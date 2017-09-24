#include <stdio.h>

int main() {

	int x1, x2, x3, x4, x5, x6, x7, x8, x9, x10;
	double soma, media;
	
	scanf("%d %d %d %d %d %d %d %d %d %d", &x1, &x2, &x3, &x4, &x5, &x6, &x7, &x8, &x9, &x10);
	soma = x1+x2+x3+x4+x5+x6+x7+x8+x9+x10;
	media = soma/10.0;
	
	printf("soma = %1.f\n", soma);
	printf("media = %f\n", media);

	return 0;
}
