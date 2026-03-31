#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
float n1,n2,n3,dif23;

printf("Digite tres numeros ");
scanf("%f%f%f",&n1,&n2,&n3);
if(n1>0){
	printf("A raiz quadrada do primeiro numero eh: %f\n",sqrt(n1));
}
else
	printf("O quadrado do primeiro numero eh: %f\n",pow(n1,2));
if(n2<=100&&n2>=10)
	printf("Segundo numero esta entre 10 e 100 intervalo permitido\n");
if(n3<n2)
	printf("Diferenca entre o segundo e o terceiro numero eh %f\n",n2-n3);
else
	printf("%f\n",n3+1);
	
}
