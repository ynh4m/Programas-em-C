#include <stdio.h>
#include <stdlib.h>

main(){
	float n1,n2,dif;
	
	printf("Digite dois numeros ");
	scanf("%f%f",&n1,&n2);
	if(n1>n2){
		dif=n1-n2;
		printf("Difereca do maior pelo menor eh %f",dif);}
	else{
	
		dif=n2-n1;
		printf("Diferença do maior pelo menos eh %f",dif);
	}
}
