#include <stdio.h>
#include <time.h>
#include <limits.h>

#define BIGNUM 1000000000

typedef unsigned long int ulint;

ulint f1(ulint x, ulint y)
{
	if (x > y) return 0;
	return 1;
}

ulint f2(ulint x, ulint y)
{
	if ((x & ((y-x) >> 31) | y & (~(y-x) >> 31)) == x) return 0;
	return 1;
}

int main(void)
{
	clock_t tempo_init, tempo_fim;
	double tempo_gasto;
	ulint soma = 0;
	
	tempo_init = clock();
	for (int i=0, j = BIGNUM; i<BIGNUM; i++) {
		soma +=f1(i, j);
	}
	
	tempo_fim = clock();
	tempo_gasto = (double)(tempo_fim - tempo_init)/CLOCKS_PER_SEC;
	printf("Tempo gasto na versão normal: %lf\n", tempo_gasto);
	
	tempo_init = clock();
	for (int i=0, j = BIGNUM; i<BIGNUM; i++) {
		soma +=f2(i, j);
	}
	
	tempo_fim = clock();
	tempo_gasto = (double)(tempo_fim - tempo_init)/CLOCKS_PER_SEC;
	printf("Tempo gasto na versão bitwise: %lf\n", tempo_gasto);
		
	return 0;
}
	
	
	
	
	
	
	
	
