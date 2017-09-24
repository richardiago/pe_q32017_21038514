#include <stdio.h>

int main() {

	double t; 
	int op;
	
	printf("Digite a temperatura e a opção: ");
	scanf("%lf %d", &t, &op);
	
	if (op == 1) {
		
		printf("%.1f\n", 1.8*t+32);
	}
		
	else if (op == 2) {
		
		printf("%.1f\n", (t-32)/1.8);
		
	}
	
	return 0;
	
}
