#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

typedef struct Lista{
	int chave;
	struct Lista *prox;
} Lista, *ponteiroLista;


void inicializar(ponteiroLista *Lista);
_Bool consultar(ponteiroLista *Lista, int valor);
_Bool inserir(ponteiroLista *Lista, int valor);
void imprimir(ponteiroLista *Lista);


int main(void) {
	ponteiroLista lista;
	int i;
	inicializar(&lista);

	for(i = 0; i < 11 ; i++) {
		inserir(&lista,i); //inserindo de 0 a 10 na lista
	}
	imprimir(&lista);

	for (i = 0; i < 11; i++) {
		if (consultar(&lista, i)) {
			printf("O numero %d pertence a lista\n", i);
		} else {
			printf("O numero %d nao pertence a lista\n", i);
		}
	}
	return EXIT_SUCCESS;
}


void inicializar(ponteiroLista *Lista){
	*Lista = NULL;
}

ponteiroLista consultarendereco(ponteiroLista *Lista, int x){
	ponteiroLista ponteiro;
	for(ponteiro = *Lista; (ponteiro) && (ponteiro->chave != x); ponteiro = ponteiro->prox);
	return ponteiro;
}

_Bool consultar(ponteiroLista *Lista, int valor){
	return (consultarendereco(Lista, valor));
}

_Bool inserir(ponteiroLista *Lista, int valor){
	ponteiroLista novo;
	if(!(novo=(ponteiroLista)malloc(sizeof(Lista))))
		return false;
	novo->chave = valor;
	novo->prox = *Lista;
	*Lista = novo;
	return true;
}

void imprimir(ponteiroLista *Lista){
	ponteiroLista ponteiro;
	printf("\n");
	for(ponteiro = *Lista; (ponteiro) ; p = ponteiro->prox)
		printf("%d , ", ponteiro->chave);
	printf("\n");
}
