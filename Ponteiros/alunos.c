#include <stdio.h>
int main(){
    float *alunos[3];
    float a1[3], a2[3], a3[3];
    alunos[0] = a1;
    alunos[1] = a2;
    alunos[2] = a3;
    int i, j; 
    for( i = 0; i < 3; i++){
        for( j = 0; j < 3; j++){
            printf("Informe as notas do aluno %d: ", i + 1);
            scanf("%f", &alunos[i][j]);
        }
    }
        float maior = alunos[0][0];
        int cont = 0;
        for( i = 0; i < 3; i++){
            for( j = 0; j < 3; j++){
                if(alunos[i][j] >= 7.0){
                    cont ++;
                }
                if(alunos[i][j] > maior){
                    maior = alunos[i][j];
                }

            }
        }
        printf("Maior nota: %.2f\n", maior);
        printf("Quantidade de notas acima ou igual a 7.0: %d",cont );

return 0;

} 