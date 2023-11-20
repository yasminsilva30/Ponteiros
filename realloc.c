#include <stdio.h>
#include <stdlib.h>

int main() {

    char *nome;

    nome = (char*)malloc(5 * sizeof(char));

    printf("\n Digite um nome: \n");
    scanf("%s", nome);

    printf("\n Nome: %s", nome);

    nome = realloc(nome, 10 * sizeof(char));

    scanf("%s", nome);

    printf("\n Nome: %s", nome)

    free(nome);

}