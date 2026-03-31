#include <stdio.h>

#include <stdlib.h>

main (){

	int n,cont,fatorial=1;

	printf("Digite um numero maior que 0: ");

	scanf("%d",&n);

	if(n<0){

		printf("Numero invalido");

	}

	else{

		for(cont=1;cont<=n;cont++){

			fatorial*=cont;

		}

		printf("O fatorial de %d eh: %d",n,fatorial);

	}

}
