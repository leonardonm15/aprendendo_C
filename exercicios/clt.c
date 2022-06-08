#include <stdio.h>
#include <stdlib.h>

int main() {
    float hora_extra = 0;
    float hora = 0;
    float r_hora = 0;

    printf("Quantas horas vc trabalhou? ");
    scanf("%f", &hora);
    printf("Quanto vc ganha por hora ? ");
    scanf("%f", &r_hora);

    if (hora > 160){
        float hora_extra = hora - 160;
        float r_hora_extra = r_hora * 1.5;
        printf("Recebido: %2.f (%2.f <-extra )\n", ((r_hora * 160) + hora_extra * r_hora_extra), hora_extra * r_hora_extra);
        return EXIT_SUCCESS;
    }
    printf("Você recebeu %2.f reais trablhando %2.f horas\n", hora * r_hora, hora);
    return EXIT_SUCCESS;
}
