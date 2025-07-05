#include <stdio.h>
void parimp(int n){
    if(n % 2 ==0){
        printf("%d e par", n);
}   else{
        printf("%d e impar.", n);
}
}
int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    parimp(num);
return 0;
}