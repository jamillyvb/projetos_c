#include <stdio.h>

int main(){

    int i, n;
    double c, f;
    
    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%lf", &f);
        
        c = (5*(f-32))/9;
        printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", f, c);
    }

    return 0;
}