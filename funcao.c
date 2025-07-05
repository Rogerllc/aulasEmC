#include <stdio.h>
int main(){
    int a[5];
    int b[5];
    int i;

    for(i = 0; i < 5; i++){
        printf("Informe o valor: ");
        scanf("%d",&a[i]);
        if(i == 0){
            b[i] = a[i];
        }
        else if(i % 2 == 0){
            b[i] = a[i] * 5;
        }else{
            b[i] = a[i] + 5;
        }

    }
    printf("matrix a\n");
    for(i = 0; i < 5; i++){
        printf("%d ", a[i]);

}
    printf("\n\nmatrix b\n");
    for(i = 0; i < 5; i++){
        printf("%d ", b[i]);

}
return 0;
}