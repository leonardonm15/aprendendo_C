#include <stdio.h>
#include <stdlib.h>

int main(){
    int flag = 1;
    int mes;
    while (mes < 1 || mes > 12) {
        printf("digite um mês e eu vou te informar o numero de dias dele: \n");
        scanf("%d", &mes);
    }
        switch (mes){
            case 2: {
                printf("este mes tem 28 dias\n");
            } break;
            case 1: 
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12: {
                printf("esse mes tem 31 dias\n");
            } break; 
            case 4:
            case 6:
            case 9:
            case 11: {
                printf("esse mes tem 30 dias\n");
            } break;
        }
        return EXIT_SUCCESS;
}