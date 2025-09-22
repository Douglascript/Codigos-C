#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float n1;
	float n2;
	float n3;
	float n4;
	float m;
	
	printf("---------------------\nMEDIA ENTRE 4 NUMEROS\n---------------------\n\n");
	
	printf("Informe as notas do aluno para o calculo da media\n\n");
	
	printf("Primeira nota:");
	scanf("%f", &n1);
	
	fflush(stdin);
	
	printf("Segunda nota:");
	scanf("%f", &n2);
	
	fflush(stdin);
	
	printf("Terceira nota:");
	scanf("%f", &n3);
	
	fflush(stdin);
	
	printf("Quarta nota:");
	scanf("%f", &n4);
	
	fflush(stdin);
	
	printf("");
	
	m = (n1 + n2 + n3 + n4);
	
	printf("O aluno tirou %.2f na media", m);
	
	return 0;
}
