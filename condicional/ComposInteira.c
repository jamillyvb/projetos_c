#include <stdio.h>

int main(){
	
    int n1, n2, n3, conc;
    
    scanf("%d%d%d", &n1, &n2, &n3);
    conc = n1*100+n2*10+n3;
    
    if(n1<9 && n2<9 && n3<9){
        printf("%d, %d\n", conc, conc*conc);
    }else{
        printf("DIGITO INVALIDO");
    }    
}