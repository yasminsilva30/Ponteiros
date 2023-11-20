#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[30];
    int idade;
    float media;
} Estudante;

Estudante* cadastrar(int totalEstudantes) {
    Estudante estudantes = (Estudante*)malloc(totalEstudantes * sizeof(Estudante));

    if (estudantes == NULL) {
        return NULL;
    }

    for (int i = 0; i < totalEstudantes; i++) {
        printf("\n Digite o nome: \n");
        fflush(stdin);
        scanf("%[^\n]", estudantes[i].nome);

        printf("\n Digite a idade: \n");
        fflush(stdin);
        scanf("%d", &estudantes[i].idade);

        printf("\n Digite a media: \n");
        fflush(stdin);
        scanf("%f", &estudantes[i].media);
    }

    return estudantes;

}

void mostrar(Estudante *estudantes, int totalEstudantes){

    for (int i = 0; i < totalEstudantes; i++) {
        printf("\n Nome: %s", estudantes[i].nome);
        printf("\n Media: %f", estudantes[i].media);
        printf("\n Idade: %d", estudantes[i].idade);

        printf("\n\n");

    }

}

int main() {

    Estudante *estudantes;
    int totalEstudantes;

    printf("\n Quantos estudantes voce deseja cadastrar? \n");
    scanf("%d", &totalEstudantes);

    estudantes = cadastrar(totalEstudantes);

    mostrar(estudantes, totalEstudantes);

}