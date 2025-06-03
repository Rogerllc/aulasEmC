#include <stdio.h>
int main(){
int n1,n2,r;
char op;
printf("Informe primeiro numero: ");
scanf("%d", &n1);
printf("Informe segundo numero: ");
scanf("%d", &n2);
printf("Informe um operador(+,-,*,/): ");
scanf(" %c",&op);
switch(op){
case '+':
    r = n1 + n2;
break;
case '-':
    r = n1 - n2;
break;
case '*':
    r = n1 * n2;
break;
case '/':
    if(n2 ==0 ){
        printf("Invalido");
    }
    else{
    r = n1 / n2;
    }
break;
}
printf("Resultado: %d", r);
return 0;
}