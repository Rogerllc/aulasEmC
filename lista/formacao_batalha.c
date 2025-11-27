#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char nome[50];
} Heroi;

typedef struct no {
    Heroi dados;
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
    printf("Heroi adicionado ao fim da formacao!\n");
}

void inserir_antes(Lista *lista, int id_novo, char *nome_novo, int id_vip) {
    if (lista->inicio == NULL) {
        printf("A formacao esta vazia. Nao ha VIP para proteger.\n");
        return;
    }

    No *novo = (No *)malloc(sizeof(No));
    novo->dados.id = id_novo;
    strcpy(novo->dados.nome, nome_novo);

    if (lista->inicio->dados.id == id_vip) {
        novo->proximo = lista->inicio;
        lista->inicio = novo;
        printf("Guarda-costas inserido antes do VIP (lider)!\n");
        return;
    }
    No *anterior = lista->inicio;
    while (anterior->proximo != NULL && anterior->proximo->dados.id != id_vip) {
        anterior = anterior->proximo;
    }
    if (anterior->proximo != NULL) {
        novo->proximo = anterior->proximo; 
        anterior->proximo = novo; 
        printf("Guarda-costas inserido antes do heroi %d!\n", id_vip);
    } else {
        printf("VIP com ID %d nao encontrado. Insercao cancelada.\n", id_vip);
        free(novo);
    }
}

void mostrar_formacao(Lista *lista) {
    No *atual = lista->inicio;
    
    if (atual == NULL) {
        printf("\nFormacao vazia.\n");
        return;
    }

    printf("\n--- Formacao de Batalha ---\n");
    while (atual != NULL) {
        printf("ID: %d | Heroi: %s\n", atual->dados.id, atual->dados.nome);
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
    Lista formacao;
    inicializar(&formacao);
    
    int opcao = 0;
    int id, id_vip;
    char nome[50];

    while (opcao != 4) {
        printf("\n1 - Adicionar Heroi no Fim\n");
        printf("2 - Adicionar Guarda-Costas (Inserir Antes)\n");
        printf("3 - Mostrar Formacao\n");
        printf("4 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 1 || opcao == 2) {
            printf("Digite o ID do novo heroi: ");
            scanf("%d", &id);
            printf("Digite o nome do novo heroi: ");
            scanf(" %[^\n]", nome);

            if (opcao == 1) {
                adicionar_fim(&formacao, id, nome);
            } else if (opcao == 2) {
                printf("Digite o ID do VIP (quem sera protegido): ");
                scanf("%d", &id_vip);
                inserir_antes(&formacao, id, nome, id_vip);
            }
        } else if (opcao == 3) {
            mostrar_formacao(&formacao);
        }
    }

    liberar_lista(&formacao);
    return 0;
}