#include <stdio.h>


void Hanoi(int n, char origem, char temp, char destino)
{
	if (n>0){

		Hanoi(n-1, origem, destino, temp);
		printf("%c-%c, ", origem, destino);
		Hanoi(n-1, temp, origem, destino);
	}

}

int main()
{
	int n;
	
	scanf("%d", &n);
	
	Hanoi(n, 'A', 'B', 'C');
	printf("\n");

	return 0;
}
