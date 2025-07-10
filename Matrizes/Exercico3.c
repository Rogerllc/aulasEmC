#include <stdio.h>
int main(){
    float nota[5][3];
    float media[5];
    int i, j;

    for(i = 0; i < 5; i++){
        printf("Aluno %d\n", i + 1);
        for(j = 0; j < 3; j++){
            printf("Digite a sua nota: ");
            scanf("%f",&nota[i][j]);
        }
    }

    for(i = 0; i < 5; i++){
        media[i] = 0;
        for(j = 0; j < 3; j++){
            media[i] += nota[i][j];
        }
        media[i] /= 3;
    }
    for(i = 0; i < 5; i++){
        printf("A media do aluno %d e: %.2f\n", i + 1, media[i]);
    }
return 0;
}