#include <stdio.h>

int main(){

	int a1, r, n, i, soma=0;
	
	scanf("%d %d %d", &a1, &r, &n);
	
	for(i=1; i<n; i++){
		soma+=(a1+(r*i));
	}
	
	printf("%d\n", soma+a1);
}
