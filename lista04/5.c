#include <stdio.h>

int f1(int x)
{
	int soma = 0;
	
	while (x) {
		
		soma += (x%2);
		x /=2;
	}
	
	return soma;
}

int f2(int x)
{
	int soma = 0;
	
	while (x) {
		
		soma += x & 1;
		x >>=1;
	}
	return soma;	
}

int main(void)
{
	int x;
	scanf("%d", &x);
	
	printf("%d\n", f2(x));
	
	return 0;
}
	
	
	
	
	
	
	
	
