#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int main() {
    float temperatura;
    char escala;

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);
    printf("Digite a escala: ");
    __fpurge(stdin);
    scanf("%c", &escala);

    if (escala == 'C') {
        printf("A temperatura em fahrenheit é %2.f\n", (temperatura * 9 / 5) + 32);
        return EXIT_SUCCESS;
    }
    if (escala == 'F') {
        printf("A temperatura em fahrenheit é %2.f\n", (temperatura - 32) * 5 / 9);
        return EXIT_SUCCESS;
    }
    else {
        return EXIT_SUCCESS;
    }
}
