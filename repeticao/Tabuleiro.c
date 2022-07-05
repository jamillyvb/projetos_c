#include <stdio.h>

int main (){
   
    int n, grao;
    
    scanf("%d", &n);
    
    grao = (n+((n*2)*31))+(n*32); 
    printf("%d\n", grao);
    
    return 0;
}