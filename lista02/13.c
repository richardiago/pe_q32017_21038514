#include <stdio.h>

int mdc (int x, int y)
{
	if (x%y == 0) return y;
	return mdc(x, x%y);
}


int main()
{

	int x, y;
	
	scanf("%d %d", &x, &y);
	
	printf("%d\n", mdc(x, y));
	
	return 0;
}
