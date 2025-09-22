#include <stdio.h>
#include <string.h>

int main(){
    char frase_inicio_luta[] = "Você nunca sairá daqui com vida!";
    char caixa_dialogo[100] = "Silencio";

    printf("Chefe antes da luta:\n %s", caixa_dialogo);
    strcpy(caixa_dialogo, frase_inicio_luta);
    printf("\nChefe diz:\n %s", caixa_dialogo);
return 0;
}