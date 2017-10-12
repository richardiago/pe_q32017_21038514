#include <stdio.h>

double volume (double l, double c, double a)
{
	return l*c*a;
}

int main()
{

	double l, c, a;
	
	scanf("%lf %lf %lf", &l, &c, &a);
	
	printf("%.2lf\n", volume(l,c,a));
	
	return 0;
}
