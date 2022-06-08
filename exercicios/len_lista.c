#include <stdlib.h>
#include <stdio.h>

int main(){
    char usuario[128];
    printf("digite ums string para eu analisar: ");
    scanf("%s", usuario);
    for (int i=0; i < 128; i++){
        if (usuario[i] ==  '\0'){
            printf("a string possui %d caracteres \n", i);
            return EXIT_SUCCESS;
        }   
    }
}