#include <stdio.h>
int main(){
float l1, l2, l3;
printf("Informe os tres lados:");
scanf("%f %f %f", &l1, &l2, &l3);
if(l1 == l2 && l2 == l3){
    printf("Equilatero");
}
else
    if(l1 == l2 || l1 == l3 || l2 == l3){
        printf("Isosceles");
    }
else{
    printf("Escaleno");
}
return 0;
}