#include <stdio.h>
#include <math.h>

typedef struct ponto {

	float x, y, z;
}ponto;

float distancia (struct ponto p1, struct ponto p2)
{
	float d;
	d = pow(p2.x - p1.x, 2);
	d += pow(p2.y - p1.y, 2);
	d += pow(p2.z - p1.z, 2);
	d = sqrt(d);
	
	return d;
}



int main()
{
	ponto p1, p2;
	
	scanf("%f, %f, %f", &(p1.x), &(p1.y), &(p1.z));
	scanf("%f, %f, %f", &(p2.x), &(p2.y), &(p2.z));
	
	printf("%.2f\n", distancia(p1, p2));
	
	return 0;
}
