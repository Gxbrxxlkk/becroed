#include <stdio.h>
#include<math.h> 
int main() {
 
    int N, pares = 2, i;
    scanf("%d", &N);
    for (i = 0; i <= N; i++) {
        if (pares <= N) {
            printf("%d^2 = %d\n", pares, (int)pow(pares, 2));
            pares += 2;
        }
    }
 
    return 0;
}