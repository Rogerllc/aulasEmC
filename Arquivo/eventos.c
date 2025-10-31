#include <stdio.h>
#include <stdlib.h>
int main(){
    int opcao;
    char evento[100];
    FILE *arquivo_log;
    do{
        printf("\n--- Menu Principal ---\n");
        printf("1. Registrar novo evento\n");
        printf("2. Sair\n");
        
        scanf("%d", &opcao);
        if(opcao == 1){
            printf("Registre um evento: ");
            scanf("%s", evento);

            arquivo_log = fopen("./game_log.txt", "a");
        
            if(arquivo_log == NULL){
                printf("ERRO, ARQUIVO NÃO ENCONTRADO");
                return 1;
            }
            fprintf(arquivo_log, "%s\n", evento);
            fclose(arquivo_log);
        }else if (opcao == 2){
            printf("Saindo, não ouve evento");
        }else{
            printf("Opcao invalida");
        }
    }while(opcao != 2);
return 0;
}