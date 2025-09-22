#include <stdio.h>

int main (){
	int s, soma, i= 0;
	
	printf("------------------------Somatario de numeros entre 1 e 10 respectivamente------------------------\n\n");
	
	s = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10;
	
	printf("Reultado manualmemte: %d\n", s);
	
	for(i=1; i<=10; i++){
		soma = soma + i;
	}
	printf("Resultado com estrutura de repetir FOR: %d\n", soma);
}
