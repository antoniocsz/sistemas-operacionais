#include <stdlib.h>
#include <stdio.h>

// Declaração da lista
typedef struct Lista {
  int valor;
  struct Lista *prox;
} NoLista, *Lista;


// Declaração das funções utilizadas
void inicializar(Lista *lista);
_Bool inserir(Lista *lista, int valor);
_Bool remover(Lista *lista, int valor);

/* Função principal */
int main() {
  NoLista *lista;
  inicializar(&lista);

  return 0;
}

// Funções auxiliares
void inicializar(Lista *lista){
  *lista = NULL;
}


_Bool inserir(Lista *lista, int valor) {}

_Bool remover(Lista *lista, int valor){}
