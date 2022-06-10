#include <stdio.h>
#include <stdlib.h>

int main() {
  char vogais[10] = "aeiouAEIOU";
  char nome[128];
  int numero_vogais = 0;

  printf("digite o seu nome: ");
  scanf("%s", nome);

  for (int i=0; i<=128; i++) {
    if (nome[i] == '\0') {
      printf("o numero de vogais é %d e o numero de consoantes é %d", numero_vogais, i-numero_vogais);
      break;
    } else {
        for (int j=0; j < 10; j++) {
          if (nome[i] == vogais[j]) {
            numero_vogais++;
        }
      }
    }
    }
  }
