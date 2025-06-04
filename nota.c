#include <stdio.h>
int main(){
float nota;
printf("Informe sua nota: ");
scanf("%f",&nota);
if(nota >= 90 && nota <=100){
    printf("Conceito A");
}
if(nota >= 80 && nota <90){
    printf("Conceito B");
}
if(nota >= 70 && nota < 80){
    printf("Conceito C");
}
if(nota >= 60 && nota < 70){
    printf("Conceito D");
}
if(nota < 60){
    printf("Conceito F");
}
return 0;
}