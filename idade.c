# include <stdio.h>
int main(){
int id;
printf("Informe sua idade: ");
scanf("%d",&id);
if(id >=0 && id <= 12){
    printf("Criança");
}
if(id >=13 && id <=17){
    printf("Adolecente");
}
if(id >= 18 && id <= 59){
    printf("Adulto");
}
if(id >59){   
    printf("Idoso");
}
return 0;
}