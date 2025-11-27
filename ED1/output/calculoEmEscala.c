#include <stdio.h>

int ataqueCascata(int nivel) {
    if (nivel == 1) {
        return 100; 
    }
    return 100 + ataqueCascata(nivel - 1);
}

int main() {
    int nivel;
    
    scanf("%d", &nivel);
    if (nivel < 1) {
        printf("Nivel invalido.\n");
        return 1;
    }

    int danoTotal = ataqueCascata(nivel);
    
    printf("Dano total: %d\n", danoTotal);

    return 0;
}