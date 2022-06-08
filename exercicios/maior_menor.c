#include <stdlib.h>
#include <stdio.h>

/* Escreva um programa, em C, 
que leia dez números inteiros e os salve em um vetor. 
Após isso, informe o índice do maior e do menor item. */

int main(){

    int lista_numero[10];
    int maior;
    int menor;
    for (int i=0; i<10; i++){
        printf("escreva um numero: ");
        scanf("%d", &lista_numero[i]);
        if (i == 0) {
            maior, menor = lista_numero[0];
        }else {
            if (lista_numero[i] > maior){
                maior = lista_numero[i];
            } else if (lista_numero[i] < menor) {
                menor = lista_numero[i];
            } else {
                continue;
            }
        }
    }
    printf("o maior numero dígito é p %d, o menor é o %d \n", maior, menor);
    for (int i=0; i < 10; i++) { 
        printf("elemento %d da lista -> %d \n", i, lista_numero[i]);
    }
}
