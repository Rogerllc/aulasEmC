#include <stdio.h>
void menu(){
    printf("\n------ESCOLHA AS OPCOES------\n");
    printf("1 - Cadastrar\n");
    printf("2 - Listar\n");
    printf("3 - Editar\n");
    printf("...");
    printf("0 - Sair\n");
    printf("----------------------------\n");
}
struct estudantes{
    int mat;
    char nome[50];
    float notas[3];
};
void cadastro(struct estudantes *e, int *n){
    printf("-----Cadastro-----\n");
    printf("Informe o nome do aluno: ");
    scanf(" %[^\n]", e->nome);
    
    printf("Informe o numero da matricula: ");
    scanf("%d", &e->mat);

    printf("Informe as tres notas %s:", e->nome);
    for(int i = 0; i < 3; i++){
        scanf("%f", &e->notas[i]);
    }
    (*n)++;
    printf("\nAluno cadastrado com sucesso.\n");
}
void listar(struct estudantes e[], int n){
    if(n == 0){
        printf("\nNenhum estudante cadastrado");
        return;
    }
     printf("Lista de estudantes cadastrados:\n ");
    for(int i = 0; i < n; i++){
    printf("Matricula: %d\n", e[i].mat);
    printf("Nome: %s\n", e[i].nome);
    printf("\nNotas: %.1f | %.1f | %.1f ", e[i].notas[0], e[i].notas[1], e[i].notas[2]);
    }

}
void editar(struct estudantes e[], int mat_procurada, int n){
    int encontrado = 0;

    for(int i = 0; i < n; i++){    
        if(e[i].mat == mat_procurada){
            encontrado = 1;
            printf("Aluno encontrado: %s\n", e[i].nome);
            printf("Matricula: %d \n", e[i].mat);
            printf("Notas: %.1f | %.1f | %.1f ", e[i].notas[0], e[i].notas[1], e[i].notas[2]);

            printf("\nEdicao:\n");
            printf("Informe o nome: ");
            scanf(" %[^\n]", e[i].nome);
            printf("Informe as notas para a edicao: ");
            for(int j = 0; j < 3; j++){
            scanf("%f", &e[i].notas[j]);
            }
            printf("\nDados modificados com sucesso.\n");
            break;
        }
        
    }
    if(encontrado == 0){
            printf("\nNao foi encontrado.\n");
        }
}

int main(){
    int opcao;
    int mat_procurada;
    menu();
    scanf("%d", &opcao);
    int max = 10;
    int n = 0;
    struct estudantes e[max];
    while(opcao != 0){
        if(opcao == 1){
            if(n < max){
                cadastro(&e[n], &n);
            }else{
                printf("Nao a mais espaco.");
            }
        }
        else if(opcao == 2){
            listar(e, n);
        }
        else if(opcao == 3){
            printf("Informe a matricula que deseja editar: ");
            scanf("%d", &mat_procurada);
            editar(e, mat_procurada, n);
        }
    menu();
    scanf("%d", &opcao);
    
    }

return 0;
}