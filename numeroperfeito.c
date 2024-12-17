#include <stdio.h>
 
int main() {
 
    int i,j, x, soma = 0;
    scanf("%d", &i);
    for (j=1; j<=i; j++){
        scanf("%d", &x);
        for (int k=1; k<x; k++){
            if (x%k == 0){
                soma += k;
            }
        }
        if (soma == x){
            printf("%d eh perfeito\n", x);
        } else {
            printf("%d nao eh perfeito\n", x);
        }
        soma = 0;

    }
    return 0;
}