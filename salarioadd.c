#include <stdio.h>
int main(){
int sal, ad; // pode usar float também
printf("Informe seu salario: ");
scanf("%d", &sal); // "%f"
if(sal < 100000){
    ad = sal + 1000;
    printf("Salario com adicional: %d", ad); // "%f"
}
else{
    printf("Nao ouve adicional.");
}
return 0;
}