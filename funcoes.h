// https://www.cs.usfca.edu/~galles/visualization/Algorithms.html
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

void troca(int *x, int *y) {
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}

void imprime(int vet[]) {
    int i;
    for(i = 0; i < N; i++) {
        printf("[%d]", vet[i]);
    }
    printf("\n");
}


void preenche(int vet[], int max) {
    srand(time(NULL));
    int i;
    for(i = 0; i < N; i++) {
        vet[i] = (rand() % max)+1;
    }
}

int *aloca(){
    int *vet;
    vet = (int*) malloc(N * sizeof(int));
    return vet;
}
