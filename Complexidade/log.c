#include <stdio.h>
int main(){
    int n;

    printf("Informe a energia do golem: ");
    scanf("%d", &n);
    int i;
    for(i = n; i > 1; i/=2){
        printf("Energia golem: %d\n", i);
    }
    printf("\n");
return 0;
}