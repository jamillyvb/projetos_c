#include <stdio.h>

int main(){

    int segundo, horas, minuto, h, m, s;

    scanf("%d %d %d", &horas, &minuto, &segundo);

    h = horas * 3600;
    m = minuto * 60;
    s = h + m + segundo;

    printf("O TEMPO EM SEGUNDOS E = %d\n", s);
    
    return 0;
}