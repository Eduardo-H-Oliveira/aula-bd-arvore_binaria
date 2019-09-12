#ifndef ARVOREBINARIA_H_INCLUDED
#define ARVOREBINARIA_H_INCLUDED

struct arvore_bin{
    int info;
    struct arvore_bin *direita, *esquerda;
};
typedef struct arvore_bin No;

//prototipo das funções

No* Criar();
void Inserir(No **arvore, int valor);
void Deletar_arvore(No *arvore);
No* Buscar(No **arvore, int valor);

void Pre_ordem(No *arvore);
void Central(No *arvore);
void Pos_ordem(No *arvore);


#endif // ARVOREBINARIA_H_INCLUDED
