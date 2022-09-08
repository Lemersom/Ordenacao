#include <stdio.h>

#define N 11

int binariaRecursiva(int vet[], int key, int left, int right);
int binariaNaoRecursiva(int vet[], int key, int left, int right);

int main(){

    int vet[N] = {1,5,7,8,9,14,15,26,32,44};

    //chamada da funcao     key: número que será procurado
    int busca = binariaRecursiva(vet, 26, 0, N - 1);
    int busca2 = binariaNaoRecursiva(vet, 26, 0, N - 1);

    printf("Numero %d de index %d", vet[busca], busca);
    printf("\nNumero %d de index %d", vet[busca2], busca2);

    return 0;
}

int binariaRecursiva(int vet[], int key, int left, int right){

    //algoritmo é recursivo, então deve checar no ínicio
    if (left > right) {
        return -1; //padrão escolhido para disciplina
    }

    int mid = (left+right) / 2;

    if (vet[mid] == key) {
        return mid;
    } 
    else if (key < vet[mid]) {
        return binariaRecursiva(vet, key, left, mid - 1);
    }
    else{
        return binariaRecursiva(vet, key, mid + 1, right);
    }
}

int binariaNaoRecursiva(int vet[], int key, int left, int right){

    while (left <= right) {
        int mid = (left+right) / 2;
        if (vet[mid] == key) {
            return mid;
        } 
        else if (key < vet[mid]) {
            right = mid-1;
        } 
        else {
            left = mid+1;
        }
    }
    
    return -1;
}