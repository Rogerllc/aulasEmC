#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int matricula;
    char nome[50];
} Jogador;
typedef struct no {
    Jogador dados;
    struct no *proximo;
} No;
typedef struct {
    No *inicio;
} Lista;
void inicializar(Lista *lista) {
    lista->inicio = NULL;
}
void adicionar_inicio(Lista *lista, int matricula, char *nome) {
    No *novo = (No *)malloc(sizeof(No));
    
    novo->dados.matricula = matricula;
    strcpy(novo->dados.nome, nome);
    
    novo->proximo = lista->inicio;
    lista->inicio = novo;
    
    printf("Jogador adicionado com prioridade (inicio)!\n");
}
void adicionar_fim(Lista *lista, int matricula, char *nome) {
    No *novo = (No *)malloc(sizeof(No));
    
    novo->dados.matricula = matricula;
    strcpy(novo->dados.nome, nome);
    novo->proximo = NULL;

    if (lista->inicio == NULL) {
        lista->inicio = novo;
    } else {
        No *atual = lista->inicio;
        while (atual->proximo != NULL) {
            atual = atual->proximo;
        }
        atual->proximo = novo;
    }
    
    printf("Jogador adicionado ao final da fila!\n");
}
void mostrar_fila(Lista *lista) {
    No *atual = lista->inicio;
    
    if (atual == NULL) {
        printf("\nA fila esta vazia.\n");
        return;
    }

    printf("\n--- Fila de Espera ---\n");
    int posicao = 1;
    while (atual != NULL) {
        printf("%d. Matricula: %d | Nome: %s\n", posicao, atual->dados.matricula, atual->dados.nome);
        atual = atual->proximo;
        posicao++;
    }
    printf("\n");
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
    Lista fila;
    inicializar(&fila);
    
    int opcao = 0;
    int matricula;
    char nome[50];

    while (opcao != 4) {
        printf("\n1 - Adicionar jogador no inicio (Prioridade)\n");
        printf("2 - Adicionar jogador no fim (Padrao)\n");
        printf("3 - Mostrar fila\n");
        printf("4 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 1 || opcao == 2) {
            printf("Digite a matricula: ");
            scanf("%d", &matricula);
            printf("Digite o nome: ");
            scanf(" %[^\n]", nome); 

            if (opcao == 1) {
                adicionar_inicio(&fila, matricula, nome);
            } else {
                adicionar_fim(&fila, matricula, nome);
            }
        } else if (opcao == 3) {
            mostrar_fila(&fila);
        }
    }

    liberar_lista(&fila);
    printf("Sistema encerrado.\n");
    return 0;
}