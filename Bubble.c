#include "Funcoes.h"

#define N 10

void quicksort1(int *vet);
void quicksort2(int *vet);
void quicksort3(int *vet);

int main(){

    int *vet = aloca();
    preenche(vet, 50);
    imprime(vet);

    //quicksort1(vet);
    //quicksort2(vet);
    //quicksort3(vet);

    imprime(vet);

    return 0;
}


void quicksort1(int *vet){
    int i, j;

    for(i = 0; i < N; i++){
        for(j = 1; j < N; j++){
            if(vet[j - 1] > vet[j]){
                troca(&vet[j], &vet[j - 1]);
            }
        }
    }
}

void quicksort2(int *vet){
    int i, j;

    for(i = 0; i < N - 1; i++){
        for(j = 1; j < N - i; j++){
            if(vet[j - 1] > vet[j]){
                troca(&vet[j], &vet[j - 1]);
            }
        }
    }

}

void quicksort3(int *vet){
    int i, j, stt = 1;

    for(i = 0; i < N - 1 && stt; i++){
        stt = 0;
        for(j = 1; j < N - i; j++){
            if(vet[j - 1] > vet[j]){
                stt = 1;
                troca(&vet[j], &vet[j - 1]);
            }
        }
    }
}