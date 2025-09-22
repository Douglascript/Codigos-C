#include <stdio.h>
#include <locale.h>

int main (){
	printf("---------------- Tabuada de Todos os Números ----------------\n\n");
	
	setlocale(LC_ALL, "Portuguese");
	
	int n, i;
	
	printf("Qual numero vc deseja ver a tabuada?: ");
	scanf("%d", &n);
	
	printf("");
	
	for(i=0; i<=10; i++){
		printf("%d * %d = %d\n", n, i, n*i);
	}
		
}
