#include <stdio.h>

int main(){

    int n, cem, cinq;
    double dez, um;

    scanf("%d", &n);
    cem = n/100;
    n-=(cem*100);
    cinq = n/50;
    n-=(cinq*50);
    dez = n/10;
    n-=(dez*10);
    um = n/1;
    n-=(um*1);
        
    printf("NOTAS DE 100 = %d\n", cem);    
    printf("NOTAS DE 50 = %d\n", cinq);    
    printf("NOTAS DE 10 = %.0lf\n", dez);
    printf("MOEDAS DE 1 = %.0lf\n", um);
    
    return 0;
}