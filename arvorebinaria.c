#include <stdlib.h>
#include <stdio.h>
#include "arvorebinaria.h"

No* Criar(){
return (NULL);    //inicializa a arvore com NULL
}

void Inserir(No **arvore, int valor){
if(*arvore == NULL){                        //adiciona no se não existir
    *arvore = (No*) malloc(sizeof(No)); //alocando memoria para no
    (*arvore)->esquerda = NULL;
    (*arvore)->direita = NULL;   //atribui null a esq e dir do no
    (*arvore)->info = valor;
}
if(valor < (*arvore)->info){    //valor menor que
    Inserir(&(*arvore)->esquerda,valor);   //recursao a esquerda
}else if(valor > (*arvore)->info)            //valor maior que no
    Inserir(&(*arvore)->direita,valor);   //recursao a direita

}

void Pre_ordem(No *arvore) {
    if (arvore) {
        printf("%d ", arvore->info);          //RED
        Pre_ordem(arvore->esquerda);
        Pre_ordem(arvore->direita);
    }
}

void Central(No *arvore) {
    if (arvore) {                             //ERD
        Central(arvore->esquerda);
        printf("%d ",arvore->info);
        Central(arvore->direita);

        }
}

void Pos_ordem(No *arvore) {
    if (arvore) {
        Pos_ordem(arvore->esquerda);         //EDR
        Pos_ordem(arvore->direita);
        printf("%d ", arvore->info);
    }
}

void Deletar_arvore(No *arvore) {   //deleta toda a arvore
    if (arvore == NULL)
        return;
    Deletar_arvore(arvore->esquerda);  //recursap a esquerda
    Deletar_arvore(arvore->direita);  //recursao a direita
    printf("\nNO DELETADO %d", arvore->info);
    free(arvore);
    arvore = NULL;
}

No* Buscar(No **arvore, int valor) {
    if(!(*arvore))
        return NULL;
    if(valor == (*arvore)->info)      //melhor caso
        return *arvore;
    else if(valor > (*arvore)->info)
        Buscar(&((*arvore)->direita),valor);
    else if(valor < (*arvore)->info)
        Buscar(&((*arvore)->esquerda), valor);
}
