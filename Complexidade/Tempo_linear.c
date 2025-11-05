#include <stdio.h>
struct inimigo{
    char tipo[50];
    int hp;
};
int main(){
    int n;
    
    printf("Informe a quantidade de inimigos: ");
    scanf("%d", &n);

    struct inimigo ig[n];
    int i;
    printf("Informe quais são os tipos de inimigos e seu HP: ");
    for(i = 0; i < n; i++){
    scanf("%s %d", ig[i].tipo, &ig[i].hp);
    }
    
    for(i =0; i < n; i++){
        printf("Inimigo: [%s], HP: [%d]\n", ig[i].tipo, ig[i].hp);
    }
return 0;
}