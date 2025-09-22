#include <stdio.h>

int main (){
	
	printf("------------------------Fibonaci------------------------\n\n");
	
	int n, i;
    int a = 0, b = 1, c = 0;

    printf("Quantos termos da sequencia de Fibonacci vc quer ver? ");
    scanf("%d", &n);
    
    printf("");
    
    printf("Termos em sequencia: ");
	
	for(i=0; i<n; i++){
		printf("%d ", c);
		c = a + b;
		a = b;
		b = c;
		
	}
	
	
 }
 
 // 0 1 1 2 3 5 8 13 21 34 55 89 144 
