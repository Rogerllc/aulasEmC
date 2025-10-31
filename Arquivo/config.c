#include <stdio.h>
typedef struct{
    int resolucao_x;
    int resolucao_y;
    float voluma_som;
}configuracao;
int main(){
    configuracao configurar;
    FILE *config = fopen("./config.txt", "r");
    if(config == NULL){
        printf("Erro: Arquivo config.txt nao encontrado!\n");
        return 1;
    }else{
        fscanf(config, "%d %d %f", &configurar.resolucao_x, &configurar.resolucao_y, &configurar.voluma_som);
    }
    printf("Configuracoes carregadas:\nResolucao: [%d]x[%d]\nVolume: %.1f\n", configurar.resolucao_x, configurar.resolucao_y, configurar.voluma_som);
    fclose(config);
return 0;
}