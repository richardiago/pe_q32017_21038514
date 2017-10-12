#include <stdio.h>

int db (int valor, int parcial, int i) 
{

	if (valor == 0) return parcial;
	return db(valor/2, parcial+ (valor%2)*i, i*10);
}

int bd (int valor, int parcial, int i)
{
	if(valor == 0) return parcial;
	if (valor%10 == 1) parcial +=i;
	return bd(valor/10, parcial, i*2);

}

int convert (int valor, int op)
{

	int r;
	
	if (op == 1){
		r = db(valor, 0, 1);
	}
	else if (op == 2){
		r = bd(valor, 0, 1);
	}
	
	return r;
}

int main()
{
	int valor, op;
	
	scanf("%d %d", &valor, &op);
	
	printf("%d\n", convert(valor, op));
	
	return 0;
}
