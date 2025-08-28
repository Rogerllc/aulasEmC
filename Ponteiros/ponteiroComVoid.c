#include <stdio.h>
void adiciona(int *num){
    *num = *num + 10;

}
int main(){
    int valor;
    printf("Informe uma valor: ");
    scanf("%d", &valor);
    printf("Valor inserido: %d\n", valor);

    adiciona(&valor);
    printf("Valor com adicional: %d", valor);

return 0; 
}