#include <stdio.h>
#include <math.h>


double delta(double a, double b,double c)
{

	return (b*b) -4*a*c;
}

double raizp(double a, double b, double c)
{

	return (-b+sqrt(delta(a,b,c)))/(2*a);
}

double raizn(double a, double b, double c)
{

	return (-b-sqrt(delta(a,b,c)))/(2*a);
}

int main()
{
	double a,b,c;
	
	scanf("%lf %lf %lf", &a,&b,&c);
	
	printf("%.3lf %.3lf\n", raizn(a,b,c), raizp(a,b,c));

	return 0;
}
