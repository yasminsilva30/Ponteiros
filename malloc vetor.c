#include <stdio.h>
#include <stdlib.h>

int main() {

    int *vetor;

    vetor = malloc(5 * sizeof(int)); 

    if (vetor == NULL) {
        printf("\n Sem memoria");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        vetor[i] = i + 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("\n %d", vetor[i]);
    }

    free(vetor); //liberando o espaço alocado
    return 0;

}