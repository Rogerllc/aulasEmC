#include <stdio.h>
    int test(int a, int b);

    int main(){
        int n1 = 20;
        int n2 = 20;
        int soma = test(n1, n2);

        printf("A soma de %d e %d e: %d",n1, n2, soma);
    return 0;
}

 int test(int a, int b){
        int result = a + b;
    return result;
}