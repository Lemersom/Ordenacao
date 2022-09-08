#include "funcoes.h"

#define N 10

void quicksort(int vet[], int left, int right);
int partition1(int vet[], int left, int right);
int partition2(int vet[], int left, int right); 

int main(){

    int *vet = aloca();
    preenche(vet, 50);
    imprime(vet);

    //quicksort(vet, 0, N - 1);

    imprime(vet);

    return 0;
}

void quicksort(int vet[], int left, int right){
    int pivot;
     
    if (left >= right) {
        return;
    }

    //change the partition function here
    pivot = partition1(vet, left, right);
    quicksort(vet, left, pivot-1);
    quicksort(vet, pivot+1, right);
}

int partition1(int vet[], int left, int right){
    int i = left + 1, j = right;

    while(i<=j) {
        while (vet[i] <= vet[left] && i <= right) i++;
        while (vet[j] > vet[left] && j > left) j--;

        if (i < j) troca(&vet[i], &vet[j]);
    }
    troca(&vet[j], &vet[left]);

    return j;
}

int partition2(int vet[], int left, int right){
    int i, j, pivo;
    pivo = vet[left];
    i = left + 1;

    for (j = i; j <= right; j++) {
        if (vet[j] < pivo) {
            troca(&vet[j], &vet[i]);
            i++;
        }
    }
    troca(&vet[left], &vet[i - 1]);
    
    return i - 1;
}