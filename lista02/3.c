#include <stdio.h>
#include <math.h>

float pi (int n)
{
	float a = 1.00, b= 1.00/(sqrt(2.00)), t = 1.00/4.00, p = 1.00, a1, r;

	for (int i = 0; i<n; i++){
		
		a1 = (a+b)/2.00;
		b = sqrt(a*b);
		t = t - p* pow(a - a1, 2);
		p = 2.00*p;
		a = a1;
	}
	
	r = pow(a+b, 2) / (4.00*t);
	return r;
}

int main()
{
	
	printf("%.20f\n", pi(10));
	
	return 0;
	
}

