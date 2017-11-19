#include <stdio.h>

typedef struct med
{
	int m, s, d;
}med;

void dif (med *t1, med *t2)
{
	while (t2->d) {
	
		if (t1->d -1 >= 0) {
			t1->d--;
			t2->d--;
		}
		else {
			t1->s--;
			t1->d = 99;
			t2->d--;
		}
	}
	
	while (t2->s) {
		
		if (t1->s -1 >= 0) {
			t1->s--;
			t2->s--;
		}
		else {
			t1->m--;
			t1->s = 59;
			t2->s--;
		}
	}
	
	while (t2->m) {
		t1->m--;
		t2->m--;
	}	
}



int main()
{
	med t1, t2;
	
	scanf("%dm %ds %d", &(t1.m), &(t1.s), &(t1.d));
	scanf("%dm %ds %d", &(t2.m), &(t2.s), &(t2.d));
	
	dif(&t1, &t2);
	
	printf("%dm %ds %d\n", t1.m, t1.s, t1.d);

	return 0;
}
