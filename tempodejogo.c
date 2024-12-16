#include <stdio.h>
 
int main() {

    int comecoh, comecom, terminoh,terminom, jogadoh, jogadom;
    scanf("%d %d %d %d", &comecoh, &comecom, &terminoh, &terminom);
    if (comecoh < terminoh) {
        jogadoh = comecoh - terminoh;
        jogadoh *= -1;
        if (jogadoh == 1) {
            jogadoh = 0;
        }
        if (comecom < terminom) {
            jogadom = comecom - terminom;
            jogadom *= -1;

            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", jogadoh, jogadom);
        }
        else if (comecom > terminom){
            jogadom = comecom - terminom;
            jogadom -= 60;
            jogadom *= -1;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", jogadoh, jogadom);
        } else {
            jogadom = 0;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", jogadoh, jogadom);
        }
    } else if (comecoh == terminoh) {
            jogadoh = 24;
        if (comecom < terminom) {
            jogadom = comecom - terminom;
            jogadom *= -1;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", jogadoh, jogadom);
        }
        else if (comecom > terminom){
            jogadom = comecom - terminom;
            jogadom -= 60;
            jogadom *= -1;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", jogadoh, jogadom);
        } else {
            jogadom = 0;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", jogadoh, jogadom);
        }
    } else if (comecoh > terminoh) {
        jogadoh = comecoh - terminoh;
        jogadoh -= 24;
        jogadoh *= -1;
                if (comecom < terminom) {
            jogadom = comecom - terminom;
            jogadom *= -1;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", jogadoh, jogadom);
        }
        else if (comecom > terminom){
            jogadom = comecom - terminom;
            jogadom -= 60;
            jogadom *= -1;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", jogadoh, jogadom);
        } else {
            jogadom = 0;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", jogadoh, jogadom);
        }
    } else if(comecoh == 0 && terminoh == 0){
        jogadoh = 0;
        if (comecom < terminom) {
            jogadom = comecom - terminom;
            jogadom *= -1;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", jogadoh, jogadom);
        }
        else if (comecom > terminom){
            jogadom = comecom - terminom;
            jogadom -= 60;
            jogadom *= -1;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", jogadoh, jogadom);
        } else {
            jogadom = 0;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", jogadoh, jogadom);
        }
    }

        return 0;
    }
