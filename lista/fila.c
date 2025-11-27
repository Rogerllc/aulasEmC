#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
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

void adicionar_fim(Lista *lista, int id, char *nome) {
    No *novo = (No *)malloc(sizeof(No));
    novo->dados.id = id;
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
    printf("Jogador adicionado a fila!\n");
}

void iniciar_partida(Lista *lista) {
    if (lista->inicio == NULL) {
        printf("Nao ha jogadores na fila.\n");
        return;
    }

    No *temp = lista->inicio;
    lista->inicio = lista->inicio->proximo;
    
    printf("Partida iniciada! Jogador %s (ID: %d) saiu da fila.\n", temp->dados.nome, temp->dados.id);
    free(temp);
}

void mostrar_fila(Lista *lista) {
    No *atual = lista->inicio;
    
    if (atual == NULL) {
        printf("\nFila de espera vazia.\n");
        return;
    }

    printf("\n--- Fila de Matchmaking ---\n");
    while (atual != NULL) {
        printf("ID: %d | Jogador: %s\n", atual->dados.id, atual->dados.nome);
        atual = atual->proximo;
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
    int id;
    char nome[50];

    while (opcao != 4) {
        printf("\n1: Adicionar jogador ao fim da fila\n");
        printf("2: Iniciar partida\n");
        printf("3: Mostrar fila de espera\n");
        printf("4: Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Digite o ID do jogador: ");
            scanf("%d", &id);
            printf("Digite o nome do jogador: ");
            scanf(" %[^\n]", nome);
            adicionar_fim(&fila, id, nome);
        } else if (opcao == 2) {
            iniciar_partida(&fila);
        } else if (opcao == 3) {
            mostrar_fila(&fila);
        }
    }

    liberar_lista(&fila);
    return 0;
}