#include <stdio.h>

int main(){
	
	int n, i=1;
	double soma=0;
	
	scanf("%d", &n);
	
	if(n<1){
		printf("Numero invalido!\n");
	}else{	
		while(i<=n){
			soma+=(1/(double)i);
			i++;
		}
		printf("%.6lf\n", soma);
	}

}
