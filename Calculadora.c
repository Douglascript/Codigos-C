#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (){
	int escolha = 0;
	float n1, n2, r= 0;
	
	printf("------------------Calculadora------------------\n\n");
	
	do {
		printf("Escolha um numero abaixo\n0 - Sair\n1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\nSua escolha:");
	scanf("%d", &escolha);
		switch (escolha){
			case 0:
				printf("Saindo...\n\n");
				break;
			case 1:
				printf("Digite um valor:");
				scanf("%f", &n1);
				printf("Digite outro valor:");
				scanf("%f", &n2);
				r = n1 + n2;
				printf("O resultado da conta entre %.2f e %.2f vale = %.0f\n\n", n1,n2,r);
				break;
			case 2:
				printf("Digite um valor:");
				scanf("%f", &n1);
				printf("Digite outro valor:");
				scanf("%f", &n2);
				r = n1 - n2;
				printf("O resultado da conta entre %.2f e %.2f vale = %.0f\n\n", n1,n2,r);
				break;
			case 3:
				printf("Digite um valor:");
				scanf("%f", &n1);
				printf("Digite outro valor:");
				scanf("%f", &n2);
				r = n1 * n2;
				printf("O resultado da conta entre %.2f e %.2f vale = %.0f\n\n", n1,n2,r);
				break;
			case 4:
				printf("Digite um valor:");
				scanf("%f", &n1);
				printf("Digite outro valor:");
				scanf("%f", &n2);
				r = n1 / n2;
				printf("O resultado da conta entre %.2f e %.2f vale = %.0f\n\n", n1,n2,r);
				break;
			default:
				printf("Invalido\n\n");
				break;
		}
	}while (escolha != 0);
}
