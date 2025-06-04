#include <stdio.h>
int main() {
float n1,n2,n3,m;
printf("Informe tres notas: ");
scanf("%f %f %f",&n1,&n2,&n3);
m = (n1 + n2 + n3)/3;
if(m >= 7.0){
    printf("Aprovado ");
}
if(m >= 4.0 && m <= 6.9){
    printf("Quarta prova ");
}
if(m >= 3.5 && m < 4.0){
    printf("Reprovado ");
}
printf("Sua media: %f", m);
}
