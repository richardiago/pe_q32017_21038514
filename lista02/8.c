#include <stdio.h>

float descontos(int id, int f)
{
	float salarios[] = {10000, 8000, 5000, 3000, 2000};
	float des;
	
	des = (salarios[id-1] / 20) * f;

	return des;
}

float acrescimos(int id, int he)
{
	float salarios[] = {10000, 8000, 5000, 3000, 2000};
	float acres, h = (salarios[id-1]/20)/8;
	
	if (he >40) {
		acres = he * (40 + 40);
	}
	else {
		acres = he * (h + 40);
	}
	
	return acres;
}

float salario(int id, int f, int he)
{
	float salarios[] = {10000, 8000, 5000, 3000, 2000};
	
	return salarios[id-1] + acrescimos(id, he) - descontos(id, f);
}


int main()
{

	int id, f, he;
	scanf("%d %d %d", &id, &f, &he);
	
	printf("%.0f\n", salario(id, f, he));
	
	return 0;
}
