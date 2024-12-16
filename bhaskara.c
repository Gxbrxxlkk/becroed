#include <stdio.h>
 #include <math.h>
int main() {
 
    float valor1, valor2, valor3, delta, raizdelta, raiz1,raiz2;

    scanf("%f %f %f", &valor1, &valor2, &valor3);
delta = (valor2*valor2 - 4*valor1*valor3);
raizdelta= sqrt(delta);
raiz1 = 0;
raiz2 = 0;


if(delta < 0) {
    printf("Impossivel calcular\n");

} else if (valor1 == 0) {
    printf("Impossivel calcular\n");
        
} else if(raizdelta == 0) {
    
    raiz1 = ((-1*valor2) + raizdelta)/(2*valor1);
    raiz2 = ((-1*valor2) - raizdelta)/(2*valor1);

    printf("R1 = %.5f\nR2 = %.5f\n", raiz1, raiz2);

} else if(raizdelta > 0) {

    raiz1 = ((-1*valor2) + raizdelta)/(2*valor1);
    raiz2 = ((-1*valor2) - raizdelta)/(2*valor1);

    printf("R1 = %.5f\nR2 = %.5f\n", raiz1, raiz2);
}
    return 0;
}