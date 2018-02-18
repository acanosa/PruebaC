/*
 * Funciones.c
 *
 *  Created on: Feb 18, 2018
 *      Author: alejandro
 */

#include <stdlib.h>
#include <stdio.h>

double *dobleAleatorio(int cantidad){
	double *num = (double*) malloc(cantidad * sizeof(double));
	for(int i=0;i<cantidad;i++){
		num[i] = (double) (rand() % 11) / 1.57;
	}
	return num;
}
