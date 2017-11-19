#include <stdio.h>

int f1(int x)
{
	int y = 1;
	
	while (y<x) y *=2;
	
	if (x==y) return 0;
	return 1;
}

int f2(int x)
{
	int y = 1;
	
	while (y<x) y = y<<1;
	
	if (x==y) return 0;
	return 1;	
}

int main(void)
{
	int x, y;
	scanf("%d", &x);
	
	y = f2(x);
	
	if (y == 0) printf("sim\n");
	else printf("nao\n");
	
	return 0;
}
	
	
	
	
	
	
	
	
