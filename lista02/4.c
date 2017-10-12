#include <stdio.h>

float soma (float x, float y)
{
	return x+y;
}

float sub (float x, float y)
{
	return x-y;
}

float mult (float x, float y)
{
	return x*y;
}

float div (float x, float y)
{
	return x/y;
}

float pot (float x, float y)
{
	float p = 1.0;
	
	for (int i = 0; i< y; i++){
		p *= x;
	}
	
	return p;
}


float calculadora (int op, float x, float y)
{

	switch(op){
		case 1:
			return soma(x,y);
			break;
		case 2:
			return sub(x,y);
			break;
		case 3:
			return mult(x,y);
			break;
		case 4:
			return div(x,y);
			break;
		case 5:
			return pot(x,y);
			break;
	}
}

int main()
{

	int op;
	float x, y;
	
	scanf("%d %f %f", &op, &x, &y);
	
	printf("%.0f\n", calculadora(op,x,y));	
	

	return 0;

}

