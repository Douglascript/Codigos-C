#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int main (){
	int total_segundos;
	int horas, minutos, segundos;
	
	printf("-------------------Conversor Temporal-------------------\n\n");
	
	printf("Informe o tempo em segundos:");
	scanf("%d", &total_segundos);
	
	horas = total_segundos / 3600;
	minutos = (total_segundos % 3600) / 60;
	segundos = total_segundos % 60;
	
	printf("");
	
	printf("Tempo: %d:%d:%d", horas, minutos, segundos);
}
