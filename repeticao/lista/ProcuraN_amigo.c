#include <stdio.h>

int main(){

    int n, i=1, numb=1, k, soma_num1=0, soma_num2=0;

    scanf("%d", &n);
   /// for(k=0; k<n; k++){
        //while(i<1000){
            while(numb%i == 0){
                soma_num1+=i;
            }
            while(soma_num1%i == 0){
                soma_num2+=i;
            }            
            printf("%d, %d, %d, %d\n", soma_num1, soma_num2, i, numb);
            
            //i++;
       // }
//}    
    
    return 0;
}