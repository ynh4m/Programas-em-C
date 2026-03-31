#include <stdio.h>
#include <stdlib.h>

main(){
int n1;

printf("Digite um numero");
scanf("%f",&n1);
if(n1%2==0)
	printf("O numero  par\n");
else
	printf("O numero  impar\n");
if(n1>0)
	printf("O numero  positivo\n");
else
	printf("O numero  negativo\n");
}

