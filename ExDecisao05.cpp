#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
int idade;

printf("Digite a idade do nadador ");
scanf("%d",&idade);
if(idade>=5&&idade<=7)
	printf("Nadador Infatil A");
if(idade>=8&&idade<=10)
	printf("Nadador Infatil B");
if(idade>=11&&idade<=13)
	printf("Nadador Juvenil A");
if(idade>=14&&idade<=17)
	printf("Nadador Juvenil B");
if(idade>=18)
	printf("Nadador Senior");

}
