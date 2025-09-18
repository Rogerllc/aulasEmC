#include <stdio.h>
void ler_cenario(int n, int *pcenario){
    for(int i = 0; i < n; i++){
        scanf("%d", pcenario + i);
    }
}
int main(){
    int n;
    printf("Digite o numero de blocos: ");
    scanf("%d", &n);

    int cenario[n];

    ler_cenario(n , cenario);
    for(int i = 0; i < n; i++){
        if(cenario[i] == 1){
            cenario[i] = 2;
            break;
        }
    }
    for(int i = 0; i < n; i++){
        printf("%d ", cenario[i]);
    }
    printf("\n");
return 0;
}