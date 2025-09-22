#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (){
	float n1, n2, n3, m = 0;
	
	printf("------------------Media ponderada------------------\n\n");
	
	printf("Insira a nota do trabalho do aluno:");
	scanf("%f", &n1);
	
	printf("Insira a nota da prova semestral:");
	scanf("%f", &n2);
	
	printf("Insira a nota do exame final:");
	scanf("%f", &n3);
	
	m = (n1 * 2 + n2 * 3 + n3 * 5) / 10.0;
	
	printf("");
	
	printf("Resultado %.2f\n\n", m);

	
	if (m >= 8 && m < 10){
		printf("Nota A");
	}
	else if (m >= 7 && m < 8){
		printf("Nota B");
	}	
	else if (m >= 6 && m < 7){
		printf("Nota C");
	}
	else if (m >= 5 && m < 6){
		printf("Nota D");
	}
	else if (m >= 0 && m < 5){
		printf("Nota E");
	}
	else {
		printf("Erro");
	}
}
