#include <stdio.h>

int len (char s[])
{
	int i = 0;
	
	while (s[i] != '\0') i++;

	return i;
}

void inverter (char s[])
{
	int x = len(s), i;
	char aux[x];
	
	for (i=0; i<x; i++) {
		aux[i] = s[x-1-i];
	}
	
	for (i=0; i<x; i++) {
		s[i] = aux[i];
	}
	
}


int main()
{
	char s[255];
	fgets(s, 255, stdin);
	
	inverter(s);
	
	printf("%s\n", s);

	return 0;
}
