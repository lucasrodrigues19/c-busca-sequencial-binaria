/*
 * colecao.c
 *
 *  Created on: 25 de mai de 2020
 *      Author: lucas.rodrigues
 */

#include "colecao.h"

void criar(Colecao *colecao) {
	colecao->tamanho = SIZE;
	colecao->inicio = 0;
	colecao->fim = colecao->tamanho - 1;
	colecao->meio = (colecao->inicio + colecao->fim) / 2;
}

int buscaSequencial(Colecao colecao, int elemento) {

	for (colecao.inicio = 0; colecao.inicio < colecao.fim; colecao.inicio++) {
		if (colecao.vetor[colecao.inicio] == elemento) {
			return elemento;
		}
	}
	return -1;
}

int buscaBinaria(Colecao colecao, int elemento) {
	while (colecao.inicio <= colecao.fim) {
		colecao.meio = (colecao.inicio + colecao.fim) / 2;
		if (colecao.vetor[colecao.meio] == elemento) {
			return elemento;
		} else {
			if (elemento > colecao.vetor[colecao.meio]) {
				colecao.inicio = colecao.meio + 1;
			} else {
				colecao.fim = colecao.meio - 1;
			}
		}
	}

	return -1;
}
