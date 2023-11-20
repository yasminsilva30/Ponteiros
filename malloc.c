#include <stdio.h>
#include <stdlib.h>

int main() {
    //alocação dinâmica função malloc, realoc e free
    //função malloc retorna um endereço do espaço de memória alocado
    int *numero;
    int *numero2;
    int x; //alocação estática

    numero = (int*)malloc(1 * sizeof(int)); //alocação dinâmica
    numero2 = (int*)malloc(1 * sizeof(int)); //alocação dinâmica

    printf("\n Endereco alocado: %d", &numero);
    printf("\n Endereco alocado ao numero 2: %d", &numero2);

    if (numero == NULL) {
        printf("\n sem memoria");
        return 1;
    }

    *numero = 10;
    *numero2 = 20;

    *numero = *numero + *numero2;

    printf("\n O valor armazenado no endereco alocado eh: %d", *numero);
    
    free(numero);
    free(numero2);

    return 0;

}