#include <stdio.h>

//Decimal p/ binario
int decTobin(int valor)
{
	int x = 0, i = 1;
	
	while (valor != 0){
	
		x += (valor%2) *i;
		i *= 10;
		valor /=2;
	}
	
	return x;
}

//Binario p/ decimal
int binTodec(int valor)
{

	int x = 0, aux = 1;
	 
	for (int i = 0; valor > 0; i++) {
			
			if (valor%10 == 1) {
				x += aux;		
			}
			
			aux *= 2; 
			valor /=10;		
		}
		
	return x;
}

//Celsius-Fahrenheit
float cf(int ue, int us, float valor)
{
	if (((ue == 1) && (us == 1)) || ((ue == 2) && (us == 2))) return valor;
	else if ((ue == 1) && (us == 2)) return 1.8*valor +32;
	else if ((ue == 2) && (us == 1)) return (valor-32)/1.8;
}

//Celsius-Kelvin
float ck(int ue, int us, float valor)
{
	if (((ue == 1) && (us == 1)) || ((ue == 3) && (us == 3))) return valor;
	else if ((ue == 1) && (us == 3)) return valor + 273.15;
	else if ((ue == 3) && (us == 1)) return valor - 273.15;
}

//Fahrenheit-Kelvin
float fk(int ue, int us, float valor)
{
	if (((ue == 2) && (us == 2)) || ((ue == 3) && (us == 3))) return valor;
	else if ((ue == 2) && (us == 3)) return (((5*valor) - 160)/9) + 273.15;
	else if ((ue == 3) && (us == 2)) return 1.8 * (valor -273.15) +32;
}

//Converter temperaturas
float temperatura(int ue, int us, float valor)
{
	if ((ue == 1 || ue == 2) && (us == 1 || us == 2)) return cf(ue, us, valor);
	else if ((ue == 1 || ue == 3) && (us == 1 || us == 3)) return ck(ue, us, valor);
	else if ((ue == 2 || ue == 3) && (us == 2 || us == 3)) return fk(ue, us, valor);
	
}

//Converter unidades
int unidades(int ue, int us, int valor)
{
	if ((ue == 1 && us == 1) || (ue == 2 && us == 2)) return valor;
	else if (ue == 1 && us == 2) return decTobin(valor);
	else if (ue == 2 && us == 1) return binTodec(valor);

}

//Escolher conversor
float esc_conversor(int tc, int ue, int us, float valor)
{
	if (tc == 1) return temperatura(ue, us, valor);
	else if (tc == 2) return unidades(ue, us, (int) valor);

}

int main()
{
	int tc, ue, us;
	float valor;
	
	scanf("%d %d %d %f", &tc, &ue, &us, &valor);
	
	if (tc == 1){
		if (us == 1) printf("%.2f C\n", esc_conversor(tc, ue, us, valor));
		else if (us == 2) printf("%.2f F\n", esc_conversor(tc, ue, us, valor));
		else if (us == 3) printf("%.2f K\n", esc_conversor(tc, ue, us, valor));
		
	}
	
	else{
		printf("%.0f\n", esc_conversor(tc, ue, us, valor));
	}
		

	return 0;
}
