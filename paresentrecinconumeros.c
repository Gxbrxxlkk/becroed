 #include <stdio.h>
 
int main() {
    int valor, contagempar = 0, i;
    for (i=0; i<5; i++) {
        
        scanf("%d", &valor);
        if (valor %2 == 0) {
            contagempar++;
        }
    }
    printf("%d valores pares\n", contagempar);
 
    return 0;
}