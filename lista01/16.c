#include <stdio.h>


int main() {

	int id, falta, he;
	double d, h, hev, f;
	double cargos[] = {10000, 8000, 5000, 3000, 2000};
	char cargosn[5][11] = {"Diretor", "Gerente", "Engenheiro", "Tecnico", "Operador"};
	
	scanf("%d %d %d", &id, &falta, &he);
	
	/*valor ganho por dia e por hora*/
	d = cargos[id-1]/20;
	h = d/8;
	
	/*calculo do desconto por faltas*/
	f = d * falta;
	
	/*calculo da hora extra*/
	if (he >40) {
		hev = he * (40 + 40);
	}
	else {
		hev = he * (h + 40);
	}

	
	printf("cargo        : %s\n# de faltas  : %d\n# hora-extra : %d\ndescontos    : %.2lf\nacrescimos   : %.2lf\nsalario      : %.2lf\n", cargosn[id-1], falta, he, f, hev, cargos[id-1] - f + hev);


	return 0;
}

