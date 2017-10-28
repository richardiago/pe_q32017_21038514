#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void *a, const void *b) {
	return (*(int*)a - *(int*)b);
}

float mediana (int v[], int n)
{
	float mediana;
	
	if (n%2 != 0) return v[n/2];
	
	mediana = (v[(n/2) -1] + v[n/2]) / 2;
	
	return mediana;
}


int main()
{

	int n, i;
	scanf("%d", &n);
	
	int *v = malloc(n * sizeof(int));
	
	for (i=0; i<n; i++) {
		scanf("%d", &v[i]);
	}
	
	qsort(v, n, sizeof(int), cmpfunc);
 

	printf("%.2f\n", mediana(v, n));
	free(v);

	return 0;
}
