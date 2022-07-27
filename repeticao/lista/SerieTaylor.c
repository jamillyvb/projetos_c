#include <stdio.h>
#include <math.h>

int main(){
    int i;
    float n, x,cos,fat = 0;

    scanf("%f %f", &x, &n);

    for(i=n*2; i>0; i--){
        fat += i*(i-1);
    }

    for(i=1; i<n; i++){
        cos += (pow(-1,n)*pow(x,2*n))/fat;
    }
    printf("cos(%.2f) = %.6f\n", x, n);
    return 0;
}