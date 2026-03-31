#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
float nota1,nota2,media,freq;
int aulamin,assistidadas;

printf("Digite as duas notas ");
scanf("%f%f",&nota1,&nota2);
printf("\nDigite a quantidade de aulas ministradas ");
scanf("%d",&aulamin);
printf("\nDigite a quantidade de presencas do aluno ");
scanf("%d",&assistidadas);
freq=(assistidadas/aulamin)*100;
media=(nota1+nota2)/2;
if(freq<75)	
	printf("aluno Reprovado pro faltas");
else
	if(media<6)
		printf("Aluno reprovado por media %f",media);
	else
		printf("aluno Aprovado \nMedia= %f",media);
}
