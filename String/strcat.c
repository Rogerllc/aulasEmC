#include <stdio.h>
#include <string.h>

int main(){
    char nome[30] = "Fred ";
    char sobrenome[] = "Carvalho";

    strcat(nome, sobrenome); // Utilizado para juntar palavras
    printf("Seu nome e: %s", nome);

return 0;
}
