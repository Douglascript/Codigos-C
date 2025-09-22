#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("------------------------------Aumento salarial------------------------------\n\n");
	
	float salario;
	float aumento;
	float salarionovo;
	
	printf("Informe seu salario:");
	scanf("%f", &salario);
	
	printf("Informe o percentual de aumento:");
	scanf("%f", &aumento);
	
	printf("");
	
	salarionovo = (salario / 100 * aumento) + salario;
	
	printf("Seu novo salario sera de R$%.2f", salarionovo);
}
