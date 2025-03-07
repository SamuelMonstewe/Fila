#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>

typedef struct Pilha1{
    uint16_t *top;
    Pilha2 *conector;
} Pilha1;

typedef struct Pilha2{
    uint16_t *top;
} Pilha2;

typedef struct Fila{
    
};

int main(){
    return 0;
}