#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Unidade {
    int x;
    int y;
};

int main() {
    int n;
    int i, j;
    double raio;
    int cont_duplas = 0;

    struct Unidade *unidade;

    printf("Informe o numero de unidades inimigas: ");
    scanf("%d", &n);

    unidade = (struct Unidade*)malloc(n * sizeof(struct Unidade));
    if (unidade == NULL) {
        printf("ERRO");
        return 1;
    }

    printf("Informe as cordenadas x e y de cada unidade:\n"); 
    for (i = 0; i < n; i++) {
        printf("Unidade %d: ", i + 1); // Mudei de %d para %d: 
        scanf("%d %d", &unidade[i].x, &unidade[i].y);
    }
    printf("Informe o raio da explosao: ");
    scanf("%lf", &raio);

    for (i = 0; i < n; i++) {    
        for (j = i + 1; j < n; j++) { 
            double dist_x = unidade[j].x - unidade[i].x;
            double dist_y = unidade[j].y - unidade[i].y;

            double distancia = sqrt(pow(dist_x, 2) + pow(dist_y, 2));

            if (distancia <= raio) {
                cont_duplas++;
            }
        }
    }
    
    printf("\nTotal de duplas de inimigos dentro do raio (%.2f): %d\n", raio, cont_duplas);
    
    free(unidade);
return 0;
}