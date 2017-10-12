#include <stdio.h>

int fibMem[1000];

int fib (int n)
{
	if (n==0) return 0;
	if (n==1) return 1;
	if (fibMem[n] == -1){
		fibMem[n] = fib(n-1) + fib(n-2);
	}
	
	return fibMem[n]; 
}

int main()
{
	int n;
	
	for(int i=0; i<1000; i++) fibMem[i] = -1;
	
	fibMem[0] = 0;
	fibMem[1] = 1;
	
	scanf("%d", &n);
	
	for(int i = 0; i<n; i++){
		printf("%d ", fib(i));
	}
	printf("\n");
	
	
	return 0;
}




