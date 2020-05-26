/*
 * colecao.h
 *
 *  Created on: 25 de mai de 2020
 *      Author: lucas.rodrigues
 */

#ifndef COLECAO_H_
#define COLECAO_H_
#define SIZE 10


#endif /* COLECAO_H_ */

typedef struct Colecao{
	int inicio;
	int meio;
	int fim;
	int tamanho;
	int vetor[SIZE];
}Colecao;

void criar(Colecao *colecao);
int buscaSequencial(Colecao colecao, int elemento);
int buscaBinaria(Colecao colecao, int elemento);

