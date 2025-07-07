#include <stdio.h>
#include <string.h>

int main(){
    char original[30];
    char copia[30];

    printf("Digite uma palavra: ");
    fgets(original, 30, stdin);

    strcpy(copia, original); // Faz uma copia da palavra original.
    printf("Origial: %s\n", original);
    printf("Copia: %s", copia);
return 0;
}