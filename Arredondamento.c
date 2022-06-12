#include <stdio.h>

int main(){

    int n, a, cem, cinq, dez, um;
    double r, i;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        a++;
        n/=100;
    } 
    printf("%d\n", a);
    // printf("NOTAS DE 100 = %lf\n", cem);
    // printf("NOTAS DE 50 = %lf\n", cinq);
    // printf("NOTAS DE 10 = %lf\n", dez);
    // printf("NOTAS DE 1 = %lf\n", um);
    
    return 0;
}