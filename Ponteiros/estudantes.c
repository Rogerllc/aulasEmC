#include <stdio.h>
#include <string.h>

int main(){
    char *estudantes[3];
    char et1[50], et2[50], et3[50];
    estudantes[0] = et1;
    estudantes[1] = et2;
    estudantes[2] = et3;
    int i, j;

    for(i = 0; i < 3; i++){
            printf("Informe o nome do %d estudante: ", i + 1);
            scanf("%s", estudantes[i]);
    }
    char temp[50];
    for(i = 0; i < 3 - 1; i++){
        for(j = 0; j < 3 - 1 - i; j++){
            if(strcmp(estudantes[j], estudantes[j + 1]) > 0){
                strcpy(temp, estudantes[j]);
                strcpy(estudantes[j], estudantes[j + 1]);
                strcpy(estudantes[j + 1], temp);
            }
        }
    }
    printf("Ordem alfabetica dos alunos:\n");
    for(i = 0; i < 3; i++){
        printf("%s\n", estudantes[i]);
    }

return 0;
} 
