#include <stdio.h>

int main() {
  int torre = 0;
    // Movimento da Torre.
    printf("Torre:\n");
    // Mover a Torre 5 casas para a direita.
    while (torre < 5) {
    printf("Direita\n");
    torre++;
    }
  int bispo = 1;
 // Movimento do Bispo.
 printf("Bispo:\n");
 // Mover o Bispo 5 casas na diagonal superior/esquerda.
 for (int bispo = 1; bispo <= 5; bispo++) {
  printf("Cima, Direita\n");
}

  int rainha = 1;
      // Movimento da Rainha.
      printf("Rainha:\n");
      // Mover a Rainha 8 casas para a esquerda.
  do {
    printf("Esquerda\n");
    rainha++;
} while (rainha <= 8);
    return 0;
}
