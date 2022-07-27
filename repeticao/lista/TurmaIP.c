#include <stdio.h>

int main(){
	
	
	int i=0, matricula=0, presenca=0, fim;
	float MP, ML, NF, np1=0, np2=0, np3=0, np4=0, np5=0, np6=0, np7=0, np8=0, nl1=0, nl2=0, nl3=0, nl4=0, nl5=0, tr_final=0; 
		
	while(1){
		if(matricula != -1 && np1 != -1 && np2 != -1 && np3 != -1 && np4 != -1 && np5 != -1 && np6 != -1 && np7 != -1 && np8 != -1 && nl1 != -1 && nl2 != -1 && nl3 != -1 && nl4 != -1 && nl5 != -1 && tr_final != -1){
			scanf("%d %f %f %f %f %f %f %f %f %f %f %f %f %f %f %d", &matricula, &np1, &np2, &np3, &np4, &np5, &np6, &np7, &np8,  &nl1, &nl2, &nl3, &nl4, &nl5, &tr_final, &presenca);
			MP = ((np1+np2+np3+np4+np5+np6+np7+np8)/8);
			ML = ((nl1+nl2+nl3+nl4+nl5)/5);
			NF = ((0.7*MP)+(0.15*ML)+(0.15*tr_final));
			
			if(matricula > -1){

				printf("Matricula: %d, Nota Final: %.2f, Situacao Final: ", matricula, NF);

				if(presenca>=96 && NF>=6){
					printf("APROVADO\n");
				}else if(presenca<96 && NF>=6){
					printf("REPROVADO POR FREQUENCIA\n");
				}else if(presenca>=96 && NF<6){
					printf("REPROVADO POR NOTA\n");
				}else{
					printf("REPROVADO POR NOTA E POR FREQUENCIA\n");
				}		
			}
		}else{
			return 0; 
		}
	}
	return 0;
	
}
