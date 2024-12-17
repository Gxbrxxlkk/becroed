
    #include <stdio.h>

    int main() {
        int comecoh, comecom, terminoh, terminom, jogadoh, jogadom;
        scanf("%d %d %d %d", &comecoh, &comecom, &terminoh, &terminom);

        int comeco_total_min = comecoh * 60 + comecom;
        int termino_total_min = terminoh * 60 + terminom;
        int duracao_total_min;

        if (comeco_total_min < termino_total_min) {
            duracao_total_min = termino_total_min - comeco_total_min;
        } else {
            duracao_total_min = (24 * 60 - comeco_total_min) + termino_total_min;
        }

        jogadoh = duracao_total_min / 60;
        jogadom = duracao_total_min % 60;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", jogadoh, jogadom);

        return 0;
    }