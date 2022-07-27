#include <stdio.h>

int main(){

    int n1, n2, n3, a, i=2;
    scanf("%d %d %d", &n1, &n2, &n3);

    if(n1!=0 && n2 !=0 && n3!=0){

        while(n1!=1 && n2!=1 && n3!=1){
            if(n1%i==0 || n2%i==0 || n3%i==0){
              
                printf("%d %d %d", n1, n2, n3);
                printf(" :%d\n", i);
                if(n1%i == 0){
                    n1/=i;
                    printf("%d ", n1);
                }else{
                    printf("%d ", n1);
                }
                if(n2%i == 0){
                    n2/=i;
                    printf("%d ", n2);
                }else{
                    printf("%d ", n2);
                } 
                if(n3%i == 0){
                    n3/=i;
                    printf("%d", n3);
                }else{
                    printf("%d", n3);
                }
            }else{
                i++;
            }
            printf(" :%d\n", i);
        }
    }
    return 0;
}