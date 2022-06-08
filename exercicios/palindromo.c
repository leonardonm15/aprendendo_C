#include <stdlib.h>
#include <stdio.h>

// papagaio
// [p -> 2; a -> 3; g -> 1; i -> 1; o -> 1]

int main() {
    char palavra[128];
    int tamanho_string;
    printf("digite uma palavra para eu verificar se le aé um palindromo: \n");
    scanf("%s", palavra);

    
    for (int i=0; i <= 128; i++){
        if (palavra[i] == '\0'){
            tamanho_string = i - 1;
            break;
        }
    }

    for (int i=0; i <= tamanho_string; i++){
        if (palavra[i] != palavra[tamanho_string - i]){
            printf("nao é um palindromo\n");
            return 0;
        }
    }

    printf("é um palindromo\n");
    return 0;
}