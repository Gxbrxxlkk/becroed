#include <stdio.h>
 
int main() {
 
    int numero, horas;
    float salario;

    scanf("%d", &numero);
    scanf("%d", &horas);
    scanf("%f", &salario);
    
    salario = salario * horas;
    printf("NUMBER = %d\n", numero);
    printf("SALARY = U$ %.2f\n", salario);
 
    return 0;
}