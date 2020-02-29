#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"

bool ePrimo(int num){
	int n_divisores = 0;
	for(int i=1;i<num-1; i++){
		if(num % i == 0)
			n_divisores++;
		if(n_divisores >= 2)
			return false;
	}
	return true;
}

bool eValido(int num){
	for(int i=2; i<num; i++){
		for(int j=num; j>1; j--){
			if((i + j)==num){
				if(ePrimo(i) == true && ePrimo(j) == true){
					printf("%i = %i + %i \n",num,i,j);
					return true;
				}
			}
		}
	}
	return false;
}

int main(void) {
	int i=4;
	printf("PRESSIONE PARA INICIAR");
	getchar();
	while(true){
		if(eValido(i) == false){
			printf("NUMERO ENCONTRADO %i\n",i);
			return 1;
		}
		i+=2;
	}	
	return 0;
}