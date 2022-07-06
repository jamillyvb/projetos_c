#include <stdio.h>

int main(){

    int popuPA, popuPB, anos=0;
    scanf("%d %d", &popuPA, &popuPB);
    
    while(popuPA<popuPB){
        popuPA+=((popuPA*3)/100);
        popuPB+=((popuPB*1.5)/100);
        anos++;
    }
    printf("ANOS = %d\n", anos);
    return 0;
}