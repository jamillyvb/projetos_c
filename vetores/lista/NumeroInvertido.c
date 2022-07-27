#include <stdio.h>

// 7
// 3 6 2 9 2 7 9
int main(){

    int n, seq[5000], i;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &seq[i]);
    }

    while(n>0){
        n--;
        printf("%d", seq[n]);
        
        if(n>0){
            printf(" ");
        }
    }
    return 0;
}