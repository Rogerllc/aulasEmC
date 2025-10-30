#include <stdio.h>
struct jogador{
    char nome[50];
    int pontuacao;
};
int main(){
    int n;
    int i;
    FILE *hightscore = fopen("./Hightscore.txt", "w");
    printf("Informe a quantidade de jogadores: ");
    scanf("%d", &n);
    struct jogador lista[n];
    int maior_pontuacao = 0;
    int indice_vencedor = 0;
    printf("Informe o Nome e a pontuacao do jogador: ");
    for(i = 0; i < n; i++){
        scanf("%s %d", lista[i].nome, &lista[i].pontuacao);
        if(lista[i].pontuacao > maior_pontuacao ){
            maior_pontuacao = lista[i].pontuacao;
            indice_vencedor = i;
        } 
    }
    fprintf(hightscore, "Maior pontuador:\n Nome: %s \nPontuacao: %d", lista[indice_vencedor].nome, lista[indice_vencedor].pontuacao);
    fclose(hightscore);
return 0;
}