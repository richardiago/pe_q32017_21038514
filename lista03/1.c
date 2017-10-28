#include <stdio.h>
#include <stdlib.h>

int conta_vogais(char entrada[])
{
	int a = 0, i;
	
	for (i=0; entrada[i] != '\0'; i++){
		
		if (entrada[i] == 'a' || entrada[i] == 'e' || entrada[i] == 'i' || entrada[i] == 'o' || entrada[i] == 'u'){
		
			a++;
		}
	}

	return a;
}

int main()
{
	char entrada[255];
	fgets(entrada, 255, stdin);

	printf("%d\n", conta_vogais(entrada));

	return 0;
}
