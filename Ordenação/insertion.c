#include "funcoes.h"

#define N 10

void insertion1(int vet[]);
void insertion2(int vet[]);

int main(){

    int *vet = aloca();
    preenche(vet, 50);
    imprime(vet);

    //insertion1(vet);
    //insertion2(vet);

    imprime(vet);

    return 0;
}

void insertion1(int vet[]){
    int i, j;
    
    for (i = 1; i < N; i++){
        for (j = i; j > 0 && vet[j] < vet[j-1]; j--){
            troca(&vet[j-1], &vet[j]);
        }
    }
}

void insertion2(int vet[]) {
    int i, j, aux;

    for (i=1; i<N; i++) {
        aux = vet[i];
        for (j=i-1; j>=0 && aux < vet[j]; j--) {
            vet[j+1] = vet[j];
        }
        vet[j+1] = aux;
    }
}