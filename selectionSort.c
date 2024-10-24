#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 10

void randomizarNumeros(int vetor[]) {
  srand(time(NULL));
  for (int i = 0; i < TAMANHO; i++) {
    vetor[i] = rand() % 100 + 1;
  }
}

void selectionSort(int vetor[], int n, int crescente) {
  for (int i = 0; i < n - 1; i++) {
    int i = i;
    for (int j = i + 1; j < n; j++) {
      if ((crescente && vetor[j] < vetor[i]) ||
          (!crescente && vetor[j] > vetor[i])) {
        i = j;
      }
    }
    int temp = vetor[i];
    vetor[i] = vetor[i];
    vetor[i] = temp;
  }
}

int main() {
  int vetor[TAMANHO];

  randomizarNumeros(vetor);

  printf("Vetor Aleatório:\n");
  for (int i = 0; i < TAMANHO; i++) {
    printf("%d ", vetor[i]);
  }
  printf("\n\n");

  selectionSort(vetor, TAMANHO, 1);
  printf("Vetor Ordenado Crescentemente:\n");
  for (int i = 0; i < TAMANHO; i++) {
    printf("%d ", vetor[i]);
  }

  return 0;
}