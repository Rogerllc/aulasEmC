#include <stdio.h>
int main(){
    int balas[] = {30, 30};
    int granadas[] = {5, 5};
    int foguetes[] = {2, 2};
    int *inventario[3];
    inventario[0] = balas;
    inventario[1] = granadas;
    inventario[2] = foguetes;
    
    printf("Inventario inicial:\n ");
    printf("Balas: %d\n", *inventario[0] );
    printf(" Granadas: %d\n", *inventario[1] );
    printf(" Foguetes: %d\n", *inventario[2]);

    int i;
    for(i = 0; i < 3; i++){
        *inventario[i] -=1;
    }
    
    printf("Inventario apos o uso:\n ");
    printf("Balas: %d\n", *inventario[0]);
    printf("Granadas: %d\n", *inventario[1]);
    printf("Foguetes: %d", *inventario[2]);

    printf("\n");
return 0;
}