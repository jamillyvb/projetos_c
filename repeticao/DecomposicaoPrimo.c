#include <stdio.h>

int main(){

    int a=2, n, i;

    do{
        scanf("%d", &n);
    }while(n<1);
    
    while(){
        
    }
    for(i=2; i<10; i++){
        
        if(n%2 == 0){
            n /= i;
            i = 0;
        }
        printf("%d\n", n);
        printf("%d\n", i);
    }

    return 0;
}