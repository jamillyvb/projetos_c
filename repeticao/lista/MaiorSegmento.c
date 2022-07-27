#include <stdio.h>

int main() {
  
  	int n, valant, valat, cont=0;
	
  	scanf("%d", &n);
  	if(n>0){
		scanf("%d",&valant);
  		n-=1;
  		printf("O comprimento do segmento crescente maximo e:");
  		while(n--){
   			scanf("%d",&valat);
			if(valant<valat){
				cont++;
			}
			valant = valat;
  		}
		if(cont < 1){
			printf(" 1\n");
		}else{
			printf(" %d\n", cont);
		}
	}
	return 0;
}