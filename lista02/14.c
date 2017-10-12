#include <stdio.h>

int inv (int n, int parcial)
{
	if (n == 0) return parcial;
	return inv(n/10, parcial*10+(n%10));
}

int pali (int n)
{
	int s = inv(n, 0);
	
	if (s==n) return 1;
	return 0;

}

int main()
{

	int x;
	
	scanf("%d", &x);
	
	int l = pali(x);
	
	if(l == 1) printf("sim\n");
	else printf("nao\n");
	
	return 0;
}
