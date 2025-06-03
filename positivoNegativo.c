#include <stdio.h>
int main(){
int num;
printf("Informe um numero: ");
scanf("%d",&num);
if(num > 0){
    printf("Possitivo");
}
else{
    printf("Negativo");
}
return 0;
}