#include <stdio.h>

int main() {
	
	int x;
	printf("Digite um inteiro: ");
	scanf("%d", &x);
	
	if (x==0) {
	
		printf("%d\n",1);
	}
	
	else {
	
		int f=1, i;
		
		for(i=1; i <= x; i++){
			f = f*i;
		}
		
		printf("%d\n",f);
		
	}

	return 0;	
}

	
