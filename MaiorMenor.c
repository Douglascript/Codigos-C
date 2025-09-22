#include <stdio.h>

int main (){
	int n1, n2;
	
	printf("-------------------Maior e Menor-------------------\n\n");
	
	printf("Informe um valor:");
	scanf("%d", &n1);
	
	printf("Informe outro valor:");
	scanf("%d", &n2);
	
	if(n1 > n2){
		printf("%d e maior", n1);
	}
	
	if(n2 > n1){
		printf("%d e maior", n2);
	}
	
	else {
		printf("Sao iguais");
	}
	
}
