#include <stdio.h>
int main(){
    int a[2][3];
    int b[2][3];
    int  r, t, i, j, y, x, soma[2][3];

    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            printf("Digite um valor: ");
            scanf("%d",&a[i][j]);
        }
    }
    for(y = 0; y < 2; y++){
        for(x = 0; x< 3; x++){
            printf("Digite um valor: ");
            scanf("%d",&b[y][x]);
        }
    }
    for(r = 0; r < 2; r++){
        for(t = 0; t < 3; t++){
            soma[r][t] = a[r][t] + b[r][t];
            printf("%d\n",soma[r][t]);
        }
    }
return 0;
}