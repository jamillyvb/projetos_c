#include <stdio.h>

int main(){
	
	int conta_cliente;
	float cons_metro, conta;
	char tipo_cons;
	
	scanf("%d %f %c", &conta_cliente, &cons_metro, &tipo_cons);
	
	
	if(tipo_cons == 'C'){
		conta = 500;
		conta += 0.25 * (cons_metro - 80);
	}else if(tipo_cons == 'R'){
		conta = 5 + (0.05 * cons_metro);
	}else if(tipo_cons == 'I'){
		conta = 800;
		conta += 0.04 * (cons_metro - 100);
	}
	printf("CONTA = %d\n", conta_cliente);
	printf("VALOR DA CONTA = %.2f\n", conta);
	
	return 0;
}
