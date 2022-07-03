#include <stdio.h>

int main(){

    int i, j;
    double n, l, k, s, soma, subt, divis, mult;

    scanf("%lf %d %lf %lf", &n, &i, &k, &s);
    if(n<0 || n>9){
        return 0;
    }
    printf("Tabuada de soma:\n");
    for(j=0, l=i; j<k; j++, l+=s){
        soma = n+l;
        printf("%.2lf + %.2lf = %.2lf\n", n, l, soma);
    }
    printf("Tabuada de subtracao:\n");
    for(j=0, l=i; j<k; j++, l+=s){
        subt = n-l;
        printf("%.2lf - %.2lf = %.2lf\n", n, l, subt);
    }
    printf("Tabuada de multiplicacao:\n");
    for(j=0, l=i; j<k; j++, l+=s){
        mult = n*l;
        printf("%.2lf x %.2lf = %.2lf\n", n, l, mult);
    }
    printf("Tabuada de divisao:\n");
    for(j=0, l=i; j<k; j++, l+=s){
        divis = n/l;
        printf("%.2lf / %.2lf = %.2lf\n", n, l, divis);
    }
    return 0;
}