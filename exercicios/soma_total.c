#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double s = 0;
    int vetor[19];
    printf("escreva 20 numeros para eu armazenar\n");
    
    for (int i = 0; i != 19; i++ ){
        printf("escreva o numero %d \n", i + 1);
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < 10; i++ ){
        s += pow((vetor[i] - vetor[19 - i]), 2);
    }

    printf("%f\n", s);
}
