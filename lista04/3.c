#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_ALUNOS 50
#define MAX_NOME 100

typedef struct aluno {
	
	char nome[MAX_NOME];
	int matricula;
	float p1, p2, p3;
}aluno;

void ler_dados(FILE *f, aluno listaAlunos[]) {
	
	char nome[MAX_NOME];
	int i = 0, mat;
	float p1, p2, p3;
	
	while (fscanf(f, "%s %d %f %f %f", &nome, &mat, &p1, &p2, &p3) != EOF) {
	
		strcpy(listaAlunos[i].nome, nome);
		listaAlunos[i].matricula = mat;
		listaAlunos[i].p1 = p1;
		listaAlunos[i].p2 = p2;
		listaAlunos[i].p3 = p3;
		i++;	
	}
}

void escrever_dados(FILE *g, aluno listaAlunos[])
{
	
	int i;
	float media;
	
	for (i = 0; i< MAX_ALUNOS; i++) {
		
		media = (listaAlunos[i].p1 +listaAlunos[i].p2 +listaAlunos[i].p3)/3;
		
		fprintf(g, "%s 00%d %.2f\n", listaAlunos[i].nome, listaAlunos[i].matricula, media);	 
	}
}


int main()
{	
	int i;
	aluno listaAlunos[MAX_ALUNOS];
	FILE *f, *g;
	f = fopen("lista_alunos.txt", "r");
	
	if (f == NULL) {
		printf("Não foi possivel abrir o arquivo\n");
		return -1;
	}

	
	ler_dados(f, listaAlunos);
	fclose(f);
	
	g = fopen("media_alunos.txt", "w");
	
	if (g == NULL) {
		printf("Não foi possivel abrir o arquivo\n");
		return -1;
	}
	escrever_dados(g, listaAlunos);
	fclose(g);
	
	return 0;
}
