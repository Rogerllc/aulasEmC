#include <stdio.h>
#include <string.h>
typedef struct{
    int id;
    int pontos;
}conquista;
int main(){
    int n;
    int i;
    int total_pontos = 0;
    conquista conquis;
    FILE *player_log = fopen("./player_log.txt", "r+");
    if(player_log == NULL){
        printf("ERRO");
        return 1;
    }

    fscanf(player_log, "%d ", &n);
    for(i = 0;  i < n; i++){
        fscanf(player_log, "%d %d", &conquis.id, &conquis.pontos);
        total_pontos += conquis.pontos;
    }
    printf("Total de pontos: %d", total_pontos);
    fprintf(player_log, "Programa Finalizado");
    fclose(player_log);
return 0;
}
