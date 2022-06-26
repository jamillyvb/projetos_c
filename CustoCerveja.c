#include <stdio.h>

int main (){
	
	float raio, altura, custo, area, area_lateral, area_total;
	
	scanf("%f %f", &raio, &altura);
	
	area = 3.14159*(raio*raio);
	area_lateral = 2*3.14159*raio*altura;
	area_total = 2*area+area_lateral;
	custo = area_total*100;
	
    printf("O VALOR DO CUSTO E = %.2f\n", custo);
	
    return 0;
}