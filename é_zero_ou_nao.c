#include <stdio.h>
int main(){
int num;
printf("Informe um numero para saber se e zero: ");
scanf("%d", &num);
if (num == 0){
    printf("O numero e zero");
}
else{
    printf("Nao e zero");
}
return 0;
}
