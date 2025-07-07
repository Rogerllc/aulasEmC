#include <stdio.h>
#include <string.h>

int main(){
    char senha_correta[] = "abacaixi123";
    char senha_digitada[30];

    printf("Digite a senha: ");
    scanf("%s", senha_digitada);

    if(strcmp(senha_correta, senha_digitada) == 0){ // strcmp. Faz com que compare se duas palavras são iguais. 
        printf("Acesso concedido.");
    }else{
        printf("Acesso negado.");
    }
return 0;
}