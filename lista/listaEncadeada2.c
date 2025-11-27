#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char nome[50];
} Aventureiro;
typedef struct no {
    Aventureiro dados;
    struct no *proximo;
} No;
typedef struct {
    No *inicio;
} Lista;
void inicializar(Lista *lista) {
    lista->inicio = NULL;
}
void adicionar_aventureiro(Lista *lista, int id, char *nome) {
    No *novo = (No *)malloc(sizeof(No));
    
    novo->dados.id = id;
    strcpy(novo->dados.nome, nome);
    
    novo->proximo = lista->inicio;
    lista->inicio = novo;
    
    printf("Aventureiro adicionado ao grupo!\n");
}
void mostrar_grupo(Lista *lista) {
    No *atual = lista->inicio;
    
    if (atual == NULL) {
        printf("\nO grupo esta vazio.\n");
        return;
    }

    printf("\n Grupo de Aventureiros \n");
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
    Lista grupo;
    inicializar(&grupo);
    
    int opcao = 0;
    int id;
    char nome[50];

    while (opcao != 3) {
        printf("\n1: Adicionar Aventureiro\n");
        printf("2: Mostrar Grupo\n");
        printf("3: Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Digite o ID do aventureiro: ");
            scanf("%d", &id);
            printf("Digite o nome do aventureiro: ");
            scanf(" %[^\n]", nome); 
            
            adicionar_aventureiro(&grupo, id, nome);
        } else if (opcao == 2) {
            mostrar_grupo(&grupo);
        }
    }
    liberar_lista(&grupo);
    printf("Grupo dispersado.\n");
    return 0;
}