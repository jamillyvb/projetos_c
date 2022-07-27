#include <stdio.h>

int main(){
    int i, num, den=100;
    float n;

    scanf("%f", &n);

    num = n*100;

    for(i=2; i<=9; i++){
        if(num%i == 0 && den%i == 0){
            num/=i;
            den/=i;
            break;
        }
    }
    printf("%d/%d\n", num, den);

    return 0;
}