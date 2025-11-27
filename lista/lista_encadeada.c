#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char nome[50];
} Movimento;

typedef struct no {
    Movimento mov;
    struct no *proximo;
} No;

typedef struct {
    No *inicio;
} Lista;

void inicializar(Lista *lista) {
    lista->inicio = NULL;
}

void inserir_inicio(Lista *lista, int id, char *nome) {
    No *novo = (No *)malloc(sizeof(No));
    
    novo->mov.id = id;
    strcpy(novo->mov.nome, nome);
    
    novo->proximo = lista->inicio;
    lista->inicio = novo;
    
    printf("Movimento inserido no inicio do combo!\n");
}

void liberar_lista(Lista *lista) {
    No *atual = lista->inicio;
    while (atual != NULL) {
        No *temp = atual;
        atual = atual->proximo;
        free(temp);
    }
    lista->inicio = NULL;
}

int main() {
    Lista combo;
    inicializar(&combo);
    
    int opcao = 0;
    int id;
    char nome[50];

    while (opcao != 2) {
        printf("\n1: Inserir novo movimento no inicio do combo\n");
        printf("2: Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Digite o ID do movimento: ");
            scanf("%d", &id);
            printf("Digite o nome do movimento: ");
            scanf(" %[^\n]", nome); 
            
            inserir_inicio(&combo, id, nome);
        }
    }

    liberar_lista(&combo);
    return 0;
}