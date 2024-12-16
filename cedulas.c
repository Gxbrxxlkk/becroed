#include <stdio.h>
 
int main() {
 
    int valor, nota100, nota50, nota20, nota10, nota5,nota2, nota1;
    scanf("%d", &valor);

nota100 = valor/100;
nota50 = (valor%100)/50;
nota20 = ((valor%100)%50)/20;
nota10 = (((valor%100)%50)%20)/10;
nota5 = ((((valor%100)%50)%20)%10)/5;
nota2 = (((((valor%100)%50)%20)%10)%5)/2;
nota1 = ((((((valor%100)%50)%20)%10)%5)%2)/1;

printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", valor,nota100,nota50,nota20, nota10, nota5, nota2, nota1);
    return 0;
}