#include <stdio.h>
int main(){
int num, quant;
float valor;

printf("CODIGO DO ITEM | ESPECIFICAÇÕES | PREÇO UNITARIO\n");
printf("     100       | Cachorro quente|     10,00  \n");
printf("     101       |     Bauru      |     12,00 \n");
printf("     102       |    X-Salada    |     15,00  \n");
printf("     103       |   Hamburguer   |     18,00 \n");
printf("     104       |  Refrigerante  |     5,00 \n");

printf("Informe o codigo do pedido: \n");
scanf("%d", &num);
printf("Informe a quantidade do produto: \n");
scanf("%d", &quant);
switch(num){
case 100:
    valor = 10.00 * quant;
break;
case 101:
    valor = 12.00 * quant;
break;
case 102:
    valor =  15.00 * quant;
break;

case 103:
    valor =  18.00 * quant;
break;
case 104:
    valor =  5.00 * quant;
break;
}
printf("O valor e %f dos %d produtos", valor, quant);
return 0;
}