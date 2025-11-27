#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char titulo[50];
    char status[50];
} Missao;

typedef struct no {
    Missao dados;
    struct no *proximo;
} No;

typedef struct {
    No *inicio;
} Lista;

void inicializar(Lista *lista) {
    lista->inicio = NULL;
}

void adicionar_missao(Lista *lista, int id, char *titulo, char *status) {
    No *novo = (No *)malloc(sizeof(No));
    
    novo->dados.id = id;
    strcpy(novo->dados.titulo, titulo);
    strcpy(novo->dados.status, status);
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
}

void mostrar_missoes(Lista *lista) {
    No *atual = lista->inicio;
    
    if (atual == NULL) {
        printf("\nDiario vazio.\n");
        return;
    }

    printf("\n--- Diario de Missoes ---\n");
    while (atual != NULL) {
        printf("ID: %d | Titulo: %s | Status: %s\n", atual->dados.id, atual->dados.titulo, atual->dados.status);
        atual = atual->proximo;
    }
    printf("\n");
}

No* pesquisar_missao(Lista *lista, int id) {
    No *atual = lista->inicio;
    while (atual != NULL) {
        if (atual->dados.id == id) {
            return atual;
        }
        atual = atual->proximo;
    }
    return NULL;
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
    Lista diario;
    inicializar(&diario);
    
    int opcao = 0;
    int id;
    char titulo[50];
    char status[50];
    No *resultado;

    while (opcao != 4) {
        printf("\n1 - Adicionar Missao\n");
        printf("2 - Mostrar Missoes\n");
        printf("3 - Buscar Missao por ID\n");
        printf("4 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Digite o ID: ");
            scanf("%d", &id);
            printf("Digite o Titulo: ");
            scanf(" %[^\n]", titulo); 
            printf("Digite o Status: ");
            scanf(" %[^\n]", status);
            
            adicionar_missao(&diario, id, titulo, status);
        } else if (opcao == 2) {
            mostrar_missoes(&diario);
        } else if (opcao == 3) {
            printf("Digite o ID para buscar: ");
            scanf("%d", &id);
            resultado = pesquisar_missao(&diario, id);
            
            if (resultado != NULL) {
                printf("\n--- Missao Encontrada ---\n");
                printf("ID: %d\nTitulo: %s\nStatus: %s\n", 
                       resultado->dados.id, 
                       resultado->dados.titulo, 
                       resultado->dados.status);
            } else {
                printf("Missao nao encontrada!\n");
            }
        }
    }

    liberar_lista(&diario);
    return 0;
}