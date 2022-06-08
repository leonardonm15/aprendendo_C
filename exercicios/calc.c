#include <stdio.h>
#include <stdlib.h>

int main() {
    _Bool  escolha;
    escolha = 0;
    while (escolha == 0){
        float num1, num2;
        printf("Digite dois numeros, e em seguida escolha a operação a ser realizada: \n");
        scanf("%f %f", &num1, &num2);
        int op;
        printf(" Adição -> 1\n Subtração -> 2\n Divisão -> 3\n Multiplicação -> 4\n");
        scanf("%d", &op);
        switch(op) {
            case 1: {
                printf("%2.f + %2.f é %2.f\n", num1, num2, num1 + num2);
                escolha = 1;
            } break;
            case 2: {
                printf("%2.f - %2.f é %2.f\n", num1, num2, num1 - num2);
                escolha = 1;
            } break;
            case 3: {
                printf("%2.f/%2.f é %f\n", num1, num2, num1/num2);
                escolha = 1;
            } break;
            case 4: {
                printf("%2.f * %2.f é %2.f\n", num1, num2, num1 * num2);
                escolha = 1;
            } break;
            default: {
                escolha = 0;
            } break;
        }
    }
}