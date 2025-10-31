#include <stdio.h>
typedef struct{
    char nome[50];
    int nivel;
    float vida;
    float mana;
}personagem;
void menu(){
    printf("\n------MENU-----\n");
    printf("1 - Criar Novo Personagem\n"); 
    printf("2 - Sair\n");                 
} 
int main(){
    personagem criar_personagem;
    int opcao;
    FILE *save;
    do{
        menu();
        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        if(opcao == 1){
            printf("Insira informação do novo personagem: ");
            scanf("%s %d %f %f",criar_personagem.nome, &criar_personagem.nivel, &criar_personagem.vida, &criar_personagem.mana);
            save = fopen("./savegame.sav", "wb");
            if(save == NULL){
                printf("ERRO");
                return 1;
            }
            fwrite(&criar_personagem, sizeof(personagem), 1, save);
            fclose(save);
            printf("Personagem %s salvo com sucesso!\n", criar_personagem.nome);
        }else if(opcao != 2){
            printf("Invalido\n"); 
        }

    } while(opcao != 2); 
    
    printf("Saindo do programa.\n"); 
       
 return 0;
}