#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>

typedef struct Fila {
    uint16_t *inicio;
    uint16_t *fim;
    uint16_t comprimento;
    uint16_t indice;
} Fila;

void setFila(Fila *fila, const uint16_t comprimento){
    fila->indice = 0;
    fila->comprimento = comprimento;
    fila->inicio = (int16_t*)malloc(fila->comprimento * sizeof(uint16_t));
    fila->fim = fila->inicio;
}

void enqueue(Fila *fila, const uint16_t valor){
    if(fila->indice != fila->comprimento){
        *(fila->fim) = valor;
        fila->fim++;
        fila->indice++;
    }
    else{
        printf("A fila está cheia\n");
    }
}

void dequeue(Fila *fila){
    if(fila->indice == 0){
        printf("A fila está vazia");
    }
    else{
        fila->inicio++;    
    }
}

void imprimirFila(Fila *fila){
    for (size_t i = 0; i < fila->comprimento; i++){
        printf(" %" PRIu16 " | ", *fila->inicio);
        fila->inicio++;
    }
 
    printf("\n");
}

int main(){
    Fila fila;
    setFila(&fila, 5);

    enqueue(&fila, 1);
    enqueue(&fila, 2);
    enqueue(&fila, 3);
    enqueue(&fila, 4);
    enqueue(&fila, 5);
    imprimirFila(&fila);

    return 0;
}
