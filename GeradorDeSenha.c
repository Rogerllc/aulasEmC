#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void geradorSenha(char *senha, int tamanho){
    const char caracteset[] = "abcdefghijklmnopqrstuwxyzABCDEFGHIJKLMNOPQRSTUVWXZ0123456789!#*.<>";
    int carcterset_size = sizeof(caracteset) - 1;
   

    for(int i = 0; i < tamanho; i++){
        int ramdom_index = rand() % carcterset_size;
        senha[i] = caracteset[ramdom_index];
    }
    senha[tamanho] = '\0';
}
int main(){
   
    int tamanho;
    srand(time(NULL));
    
    printf("Digite o tamanho para a senha: ");
    scanf("%d", &tamanho);

    if(tamanho <= 0){
        printf("O tamanho da senha deve ser um numero positivo\n");
        return 1;
    }
    char *senha = (char *) malloc((tamanho + 1) * sizeof(char));
    if(senha == NULL){
        printf("Erro\n");
        return 1;
    }
    geradorSenha(senha, tamanho);
    printf("Senha gerada: %s\n", senha);
    free(senha);

return 0;
}