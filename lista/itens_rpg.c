#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char nome[50];
} Item;

typedef struct no {
    Item dados;
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
    novo->dados.id = id;
    strcpy(novo->dados.nome, nome);
    
    novo->proximo = lista->inicio;
    lista->inicio = novo;
    printf("Item inserido no inicio!\n");
}

void inserir_fim(Lista *lista, int id, char *nome) {
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
    printf("Item inserido no fim!\n");
}

void inserir_catalisador(Lista *lista, int id_novo, char *nome_novo, int id_referencia) {
    No *atual = lista->inicio;
    
    // Busca o fragmento de referência pelo ID
    while (atual != NULL && atual->dados.id != id_referencia) {
        atual = atual->proximo;
    }

    if (atual != NULL) {
        // Encontrou o fragmento, insere o catalisador depois dele
        No *novo = (No *)malloc(sizeof(No));
        novo->dados.id = id_novo;
        strcpy(novo->dados.nome, nome_novo);
        
        novo->proximo = atual->proximo;
        atual->proximo = novo;
        printf("Catalisador inserido apos o fragmento %d!\n", id_referencia);
    } else {
        printf("Fragmento com ID %d nao encontrado. Insercao cancelada.\n", id_referencia);
    }
}

void mostrar_inventario(Lista *lista) {
    No *atual = lista->inicio;
    
    if (atual == NULL) {
        printf("\nInventario vazio.\n");
        return;
    }

    printf("\n--- Inventario de Itens ---\n");
    while (atual != NULL) {
        printf("ID: %d | Nome: %s\n", atual->dados.id, atual->dados.nome);
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
    Lista inventario;
    inicializar(&inventario);
    
    int opcao = 0;
    int id, id_ref;
    char nome[50];

    while (opcao != 5) {
        printf("\n1 - Inserir item no inicio\n");
        printf("2 - Inserir item no fim\n");
        printf("3 - Inserir catalisador apos um fragmento\n");
        printf("4 - Mostrar inventario\n");
        printf("5 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 1 || opcao == 2 || opcao == 3) {
            printf("Digite o ID do novo item: ");
            scanf("%d", &id);
            printf("Digite o nome do novo item: ");
            scanf(" %[^\n]", nome);

            if (opcao == 1) {
                inserir_inicio(&inventario, id, nome);
            } else if (opcao == 2) {
                inserir_fim(&inventario, id, nome);
            } else if (opcao == 3) {
                printf("Digite o ID do fragmento de referencia: ");
                scanf("%d", &id_ref);
                inserir_catalisador(&inventario, id, nome, id_ref);
            }
        } else if (opcao == 4) {
            mostrar_inventario(&inventario);
        }
    }

    liberar_lista(&inventario);
    return 0;
}