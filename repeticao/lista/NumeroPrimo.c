#include <stdio.h>

int main(){
	
	int n, s=0, i=1;	
	scanf("%d", &n);
	
	if(n < 0){
        printf("Numero invalido!\n");
        return 0;
    }

	if(n%n == 0 && n%1 == 0){
		while(i<=10){
			if(n!=i && i!=1 && n%i==0){
                s++;
            }
			i++;
		}
        if(s == 0){
            printf("PRIMO\n");
        }else{
            printf("NAO PRIMO\n");
        }
	}
	
	return 0;
}
