#include <stdio.h>

int main(){

	int n1, n2, i, n;
	
	scanf("%d %d", &n1, &n2);
	
	if(n1%2 != 0){
		printf("O PRIMEIRO NUMERO NAO E PAR\n");
	}else{
		n = n1;
		for(i=0; i<n2; i++){
			
			if(n2>1 && n!=n1 && i<n2){
				printf(" ");
			}
			printf("%d", n1);
			n1+=2;
		}
		printf("\n");
	}	
	
	return 0;
}
