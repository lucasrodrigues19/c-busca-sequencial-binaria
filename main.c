/*
 * main.c
 *
 *  Created on: 25 de mai de 2020
 *      Author: lucas.rodrigues
 */

#include "colecao.h"
#include <stdio.h>

int main(){
	Colecao colecao;
	criar(&colecao);
	colecao.vetor[0] = 11;
	colecao.vetor[1] = 12;
	colecao.vetor[2] = 23;
	colecao.vetor[3] = 27;
	colecao.vetor[4] = 33;
	colecao.vetor[5] = 43;
	colecao.vetor[6] = 56;
	colecao.vetor[7] = 76;
	colecao.vetor[8] = 87;
	colecao.vetor[9] = 96;

	printf("\n%d",buscaBinaria(colecao,96));
	printf("\n%d",buscaBinaria(colecao,12));
	printf("\n%d",buscaBinaria(colecao,76));
	printf("\n%d",buscaBinaria(colecao,43));

	return 0;
}

