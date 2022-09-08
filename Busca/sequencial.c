#include <stdio.h>

#define N 11

int sequencial(int vet[], int key);
int sequencialOrdenado(int vet[], int key);

int main(){

    int vet[N] = {1,5,7,8,9,14,15,26,32,44};

    //chamada da funcao
    int busca = sequencial(vet, 26);

    printf("Numero %d de index %d", vet[busca], busca);

    return 0;
}

int sequencial(int vet[], int key){
    int i;
    
    for (i = 0; i < N; i++){
        if (vet[i] == key) {
            return i;
        }
    }

    return -1;
}

int sequencialOrdenado(int vet[], int key){
    int i;

    for (i = 0; i<N && key <= vet[i]; i++){
        if (vet[i] == key) {
            return i;
        }
    }

    return -1;
}