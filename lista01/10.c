#include <stdio.h>

int main() {

	double t; 
	int op;
	
	printf("Digite a temperatura e a opção: ");
	scanf("%lf %d", &t, &op);
	
	if (op == 1) {
		
		printf("%.2f\n", t+273.15);
	}
		
	else if (op == 2) {
		
		printf("%.1f\n", t-273.15);
		
	}
	
	return 0;
	
}
