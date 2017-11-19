#include <stdio.h>

int f1(int x, int y)
{
	if (x > y) return 0;
	return 1;
}

int f2(int x, int y)
{
	if ((x & ((y-x) >> 31) | y & (~(y-x) >> 31)) == x) return 0;
	return 1;
}

int main(void)
{
	int x, y, z;
	scanf("%d %d", &x, &y);
	
	z = f2(x,y);
	
	if (z == 0) printf("maior= %d menor= %d\n", x,y);
	else printf("maior= %d menor= %d\n", y,x);
		
	return 0;
}
	
	
	
	
	
	
	
	
