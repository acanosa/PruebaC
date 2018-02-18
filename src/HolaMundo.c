#include <stdlib.h>
#include <stdio.h>
#include "Funciones.h"

int main() {
	srand(time(0));
	char **textos;
	double *num;
	num = dobleAleatorio(5);
	textos = generarTextos(5);
	//asdasdsada
	for (int i = 0; i < 5; i++) {
		printf("Doble: %.2lf\n", num[i]);
	}
	for (int i = 0; i < 5; i++) {
		printf("Texto: %s\n", textos[i]);
	}
	free(num);
	free(textos);
}

