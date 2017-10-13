#include <stdio.h>

int tp[10][10];

void am (int tp[][10])
{
	int i, j;
	
	for (i = 0; i<10; i++){
		for (j = 0; j<10; j++){
			tp[i][j] = -1;	
		}
	}
	
	for (i=0; i<10; i++){
		tp[i][0] = 1;	
	} 
	
	for (i=0; i<10; i++){
		tp[i][i] = 1;		
	}
	
	/*for (i = 0; i<10; i++){
		for (j = 0; j<10; j++){
			printf("%d ", tp[i][j]);	
		}
		printf("\n");
	}
	
	printf("\n");*/
	
}

int cb(int n, int k)
{
	if(tp[n][k] == -1){
		tp[n][k] = cb(n-1,k) + cb(n-1,k-1);
	}
	
	return tp[n][k];
}

int main()
{
	
	am(tp);
	int n, k;
	
	scanf("%d %d", &n, &k);
	
	printf("%d\n", cb(n,k));


	return 0;
}
