#include <stdio.h>

int main(){

    int n, n1, n2, i, n1u, n1d, n1c, num1, n2u, n2d, n2c, num2, maior;
    
    scanf("%d", &n);

    for(i=0; i<n; i++){
        
        scanf("%d %d", &n1, &n2);
        
        if(n1 > 999 && n2 > 999){
            return 0;
        }

        n1u = n1%10; 
        n1d = (n1%100)/10;
        n1c = n1/100;
        num1 = n1u*100+n1d*10+n1c;
        
        n2u = n2%10; 
        n2d = (n2%100)/10;
        n2c = n2/100;
        num2 = n2u*100+n2d*10+n2c;
             
        if(n1u==0 || n1c==0 || n1d==0 || n2u==0 || n2d==0 || n2c==0){
            return 0;
        }
        if(num1 > num2){
            printf("%d\n", num1);
        }else{
            printf("%d\n", num2);
        }
    }
    return 0;
}