#include <stdio.h>

typedef struct med
{
	int m, s, d;
}med;

int converte (med *t)
{
	return ((t->m *60) + t->s)*100 + t->d;
}

void dif (med *t1, med *t2)
{
	int a1 = converte(t1);
	int a2 = converte(t2);
	
	int res = a2 - a1;
	
	t2->d = (res%100);
	res /=100;
	
	if (res > 59) {
		
		t2->m = res/60;
		res =res%60;
		t2->s = res;	
	}
	
	else {
		
		t2->s = res;
		t2->m = 00;	
	}
}



int main()
{
	med t1, t2;
	
	scanf("%dm %ds %d", &(t1.m), &(t1.s), &(t1.d));
	scanf("%dm %ds %d", &(t2.m), &(t2.s), &(t2.d));
	
	dif(&t1, &t2);
	
	if (t2.d < 0 || t2.s < 0) {
		printf("%c%dm %ds %d\n",'-',t2.m, -t2.s, -t2.d);
	}
	
	else {
	
		printf("%dm %ds %d\n", t2.m, t2.s, t2.d);
	}

	return 0;
}
