#include <stdio.h>
#include <stdlib.h>

main(){
float n1,n2;
printf("digite dois numeros ");
scanf("%f%f",&n1,&n2);
if(n1==n2)
	printf("Os numeros sao iguais");
else
	if(n1>n2)
		printf("O maior numero e %.2f",n1);
	else
		printf("O maior numero e %.2f",n2);


}

