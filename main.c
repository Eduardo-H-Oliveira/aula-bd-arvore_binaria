#include <stdlib.h>
#include <stdio.h>
#include "arvorebinaria.h"
#define TAMVET        9

int main(int argc, char *argv[]) {

No *raiz;
No *search;
int valor;
int no[TAMVET];
int cont;
raiz = Criar();

for (cont=0; cont<TAMVET; cont++) {
    printf("Insira o no: ");
    scanf("%d", &no[cont]);
    Inserir(&raiz, no[cont]);
}
system("cls");

printf("\nInseriu:\t");
for (cont=0; cont<TAMVET; cont++)
    printf("%d ", no[cont]);

    printf("\n\n-----Caminhamento-------");
    printf("\n\nPre_ordem\t");
    Pre_ordem(raiz);

    printf("\nCentral\t\t");
    Central(raiz);

    printf("\nPos_Ordem\t");
    Pos_ordem(raiz);

    printf("\n\nDigite o no arvore ");
    scanf("%d", &valor);

    search = Buscar(&raiz, valor);
    if (search)
        printf("No %d esta na arvore\n", valor);
    else
        printf("No %d nao esta na arvore.\n", valor);

    printf("\n---------Deletando arvore--------");
    Deletar_arvore(raiz);

    search = Buscar(&raiz, valor);
    if(search)
        printf("\n\nNo %d esta na arvore\n", valor);
    else
        printf("\n\nNo %d nao esta na arvore.\n", valor);

    return 0;
}
