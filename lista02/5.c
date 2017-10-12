#include <stdio.h>

int fatorial (int n)
{

	int p = 1;
	
	for (int i = 1; i<=n; i++){
	
		p *= i;
	}
	
	return p;
}

int binomial (int n, int k)
{
	return fatorial(n)/(fatorial(k) * fatorial(n-k));
}

int main()
{
	int n, k;
	
	scanf("%d %d", &n, &k);
	
	printf("%d\n", binomial(n,k));
	
	return 0;
	
}
