#include <stdio.h>
int main(){
float alt;
printf("Informe sua altura: ");
scanf("%f", &alt);
if(alt < 1.50){
    printf("Baixo");
}
if(alt >= 1.50 && alt <= 1.80){
    printf("Medio");
}
else
    if(alt > 1.80){
        printf("Alto");
}
return 0;
}
