#include <stdlib.h>
#include <stdio.h>
#include "Funciones.h"


int main(){
	srand(time(0));
	double *num;
	num = dobleAleatorio(5);
	//asdasdsada
	for(int i=0;i<5;i++){
		printf("Doble: %.2lf\n", num[i]);
	}
}


