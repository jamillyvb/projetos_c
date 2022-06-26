#include <stdio.h>
#include <math.h>

int main(){
	
	float altura, aresta, v_hex, area_piramide;
	
    scanf("%f %f", &altura, &aresta);
    
    area_piramide = (3*(aresta*aresta)*sqrt(3))/2;
	v_hex = (area_piramide*altura)/3;

	printf("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS\n", v_hex);
	
	return 0;
}