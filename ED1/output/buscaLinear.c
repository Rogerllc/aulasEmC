#include <stdio.h>

#define max_personagens 10
struct dados{
    int id;
    char nome[50];
    int forca;
    int agilidade;
    int inteligencia;
};
int busca(struct dados *pdados, int n, int idbusca){
    int i;
    for(i = 0; i < n; i++){
        if(pdados[i].id == idbusca){
            return i;
        }
    }
    return -1;
}
void menu(struct dados *pdado, int n){
    int opcao;
    do{
        printf("______MENU_____\n");
        printf("1 - consultar personagem\n");
        printf("2 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if(opcao == 1){
            int idbuscar;
            printf("\n Digite o id do personagem que deseja consultar: ");
            scanf("%d", &idbuscar);
            int idencontrado = busca(pdado, n, idbuscar);

            if(idencontrado != 1){
                struct dados p = pdado[idencontrado];
                double media = (p.forca + p.agilidade + p.inteligencia) / 3.0;

                printf("\nPersonagem encontrado:\n ");
                printf("Nome: %s\n", p.nome);
                printf("Media atributos: %.2f\n", media);
            }else{
                printf("\n ERRO");
            }
        }else if(opcao == 2){
            printf("Encerrando");
        }else{
            printf("\nInvalido");
        }
    }while(opcao == 2);
}
int main(){
    int totalpersonagem;
    int i;
    struct dados campanha[max_personagens];

    printf("Quantos personagens existe: ");
    scanf("%d", &totalpersonagem);

    if(totalpersonagem > max_personagens){
        printf("ERRO, numero exede o tamanho de (%d) personagens", max_personagens);
        totalpersonagem = max_personagens;
    }else if(totalpersonagem <= 0){
        printf("Numero invalido.");
        return 1;
    }

    printf("\nRegistro do personagem:\n ");
    for(i = 0; i < totalpersonagem; i++){
        printf("ID: ");
        scanf("%d", &campanha->id);
        printf("Nome: ");
        scanf("%s", campanha->nome);
        printf("Forca: ");
        scanf("%d", &campanha->forca);
        printf("Agilidade: ");
        scanf("%d", &campanha->agilidade);
        printf("Inteligencia: ");
        scanf("%d", &campanha->inteligencia);
    }
    printf("\nPersonagem registrados\n");
    menu(campanha, totalpersonagem);
return 0;
}