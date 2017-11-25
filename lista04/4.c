#include <stdio.h>
#include <time.h>
#include <limits.h>

#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;

ulint f1(ulint x)
{
	int y = 1;
	
	while (y<x) y *=2;
	
	if (x==y) return 0;
	return 1;
}

ulint f2(ulint x)
{
	int y = 1;
	
	while (y<x) y = y<<1;
	
	if (x==y) return 0;
	return 1;	
}

int main(void)
{
	clock_t tempo_init, tempo_fim;
	double tempo_gasto;
	ulint soma = 0;
	
	tempo_init = clock();
	for (int i=0; i<BIGNUM; i++) {
		soma +=f1(i);
	}
	
	tempo_fim = clock();
	tempo_gasto = (double)(tempo_fim - tempo_init)/CLOCKS_PER_SEC;
	printf("Tempo gasto na versão normal: %lf\n", tempo_gasto);
	
	tempo_init = clock();
	for (int i=0; i<BIGNUM; i++) {
		soma +=f2(i);
	}
	
	tempo_fim = clock();
	tempo_gasto = (double)(tempo_fim - tempo_init)/CLOCKS_PER_SEC;
	printf("Tempo gasto na versão bitwise: %lf\n", tempo_gasto);
	
	
	return 0;
}
	
	
	
	
	
	
	
	
