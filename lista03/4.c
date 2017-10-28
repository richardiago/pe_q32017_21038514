#include <stdio.h>


void inverte (int matriz[][3])
{
	
	int i, j, tmp[3][3];
	
	for (i=0; i<3; i++) {
		for (j=0; j<3; j++) {
			
			tmp[j][i] = matriz[i][j];
			
		}
	}
	
	
	for (i=0; i<3; i++) {
		for (j=0; j<3; j++) {
			
			matriz[i][j] = tmp[i][j];		
		}
	}
	

}



int main()
{

	int i, j, x, matriz[3][3];
	
	for (i=0; i<3; i++) {
		for (j=0; j<3; j++) {
			scanf("%d", &x);
			matriz[i][j] = x;
		}
	}
	
	inverte(matriz);
	
	for (i=0; i<3; i++) {
		for (j=0; j<3; j++) {
			printf("%d ", matriz[i][j]);
		}
		
		printf("\n");
	}
 
	return 0;
}
