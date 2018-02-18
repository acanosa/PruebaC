/*
 * Funciones.c
 *
 *  Created on: Feb 18, 2018
 *      Author: alejandro
 */

#include <stdlib.h>
#include <stdio.h>

double *dobleAleatorio(int cantidad){
	double *num = malloc(cantidad * sizeof(double*));
	for(int i=0;i<cantidad;i++){
		num[i] = (double) (rand() % 11) / 1.57;
	}
	return num;
}

char *generarTextos(int cantidad){
	//declaro el array de palabras
	char **textos = (char**) malloc(cantidad * sizeof(char*));

	char texto[30];

	for(int i=0;i<cantidad;i++){
			textos[i] = (char*) malloc(10 * sizeof(char));
		}
	for(int i=0;i<cantidad;i++){
		sprintf(texto, "%d", (i + 1));
		strcpy(textos[i], "Texto ");
		strcat(textos[i],texto);
	}
	return textos;


}
