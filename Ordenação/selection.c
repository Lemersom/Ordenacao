#include "funcoes.h"

#define N 10

void selection(int vet[]);

int main(){

    int *vet = aloca();
    preenche(vet, 50);
    imprime(vet);

    selection(vet);

    imprime(vet);

    return 0;
}

void selection(int vet[]){
    int i, j, min;
    for (i = 0; i < N - 1; i++) {
        min = i;
        for (j = i + 1; j < N; j++) {
            if (vet[j] < vet[min]) {
                min = j;
            }
        }

    troca(&vet[min], &vet[i]);
    }
}