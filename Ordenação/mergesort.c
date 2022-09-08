#include "funcoes.h"

#define N 10

void merge(int vet[], int left, int mid, int right);
void mergesort(int vet[], int left, int right);

int main(){

    int *vet = aloca();
    preenche(vet, 50);
    imprime(vet);

    //mergesort(vet, 0, N - 1);

    imprime(vet);

    return 0;
}

void mergesort(int vet[], int left, int right){
    int mid;

    if(left >= right){
        return;
    }

    mid = (left+right)/2;
    mergesort(vet, left, mid);
    mergesort(vet, mid+1, right);
    
    merge(vet, left, mid, right);
}

void merge(int vet[], int left, int mid, int right){
    int i = left, j = mid + 1, k = 0;
    int n = (right - left) + 1;
    int *vaux;
    vaux = (int*)malloc(n * sizeof(int));

    while(i <= mid && j <= right) {
        if (vet[i] < vet[j]) {
            vaux[k++] = vet[i++];
        }
        else{
            vaux[k++] = vet[j++];
        }
    }

    //Copia os elementos da primeira parte
    while(i <= mid) {
        vaux[k++] = vet[i++];
    }

    //Copia os elementos da segunda parte
    while(j <= right) {
        vaux[k++] = vet[j++];
    }

    for (k = 0, i = left; k < n; i++, k++) {
        vet[i] = vaux[k];
    }

    free(vaux);
}
