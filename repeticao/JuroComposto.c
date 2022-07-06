// #include <stdio.h>

// int main(){

//     double r, taxa_juros, val_inicial;
//     int meses, i;
    
//     scanf("%lf %lf %d", &val_inicial, &taxa_juros, &meses);
    
//     for(i=1; i<=meses; i++){
//         val_inicial*=(1+taxa_juros);
//         r = fmod(val_inicial,100);
//         printf("a*(1+r)ˆ%d = %.2lf, renda: %.2lf\n", i, val_inicial, r);
//     }

//     return 0;
// }