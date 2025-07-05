#include <stdio.h>
void test(int a, int b, int *somar){
    *somar = a + b;

}
int main(){
    int n1 = 30;
    int n2 = 20;
    int resultado;
    test(n1, n2, &resultado);    

    printf("A soma de %d e %d e: %d", n1, n2, resultado);
return 0;
}