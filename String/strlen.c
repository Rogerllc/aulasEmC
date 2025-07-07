#include <stdio.h>
#include <string.h>

int main(){
    char nome[30];
    
    printf("Digite um palavra:\n");
    fgets(nome, 30, stdin); // Substitui o scanf, para mostrar um nome ou palavra com espaços

    int tamanho = strlen(nome); // Faz com que conte quantas letra contem em uma palavra
    printf("A quantidade do nome %s e: %d",nome, tamanho);
return 0;
}