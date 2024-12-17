#include <stdio.h>
 
int main() {
 
    int x, y, flag = 1;
    while (flag) {
    scanf("%d %d", &x, &y);
    if (x > 0 && y > 0) {
        printf("primeiro\n");
    }
    else if (x < 0 && y > 0) {
        printf("segundo\n");
    }
    else if (x < 0 && y < 0) {
        printf("terceiro\n");
    }
    else if (x > 0 && y < 0) {
        printf("quarto\n");
    }
    else if (x == 0 || y == 0) {
        flag = 0;
    }
    }
    return 0;
}