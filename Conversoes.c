#include <stdio.h>

int main(){
	
	float c, f, p, pol;
	scanf("%f %f", &f, &p);
	
	c = (5*(f-32))/9;
	pol = p*25.4;
	
	printf("O VALOR EM CELSIUS = %.2f\n", c);
	printf("A QUANTIDADE DE CHUVA E = %.2f\n", pol);
    
    return 0;
}