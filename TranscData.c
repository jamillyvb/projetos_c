#include <stdio.h>

int main(){
	
	int data, dia, mes, ano, d;
	
	scanf("%d", &data);
	

		ano = data%10000;
		mes = (data%1000000)/10000;
		dia = data/1000000;//29

		switch (mes){
			case 1:
			d = 1;
			break;

			case 2:
			d = 2;
			break;

			case 3:
			d = 3;
			break;

			case 4:
			d = 4;
			break;

			case 5:
			d = 5;
			break;

			case 6:
			d = 6;
			break;

			case 7:
			d = 7;
			break;

			case 8:
			d = 8;
			break;

			case 9:
			d = 9;
			break;

			case 10:
			d = 10;
			break;

			case 11:
			d = 11;
			break;

			case 12:
			d = 12;
			break;
		}

			if(d == 1 && dia>0 && dia<= 31){
				printf("%d de janeiro de %d\n", dia, ano);
			}else if(d == 2 && dia>0 && dia<= 28){
				printf("%d de fevereiro de %d\n", dia, ano);
			}else if(d == 3 && dia>0 && dia<= 31){
				printf("%d de marco de %d\n", dia, ano);
			}else if(d == 4 && dia>0 && dia<= 30){
				printf("%d de abril de %d\n", dia, ano);
			}else if(d == 5 && dia>0 && dia<= 31){
				printf("%d de maio de %d\n", dia, ano);
			}else if(d == 6 && dia>0 && dia<=30 ){
				printf("%d de junho de %d\n", dia, ano);
			}else if(d == 7 && dia>0 && dia<= 31){
				printf("%d de julho de %d\n", dia, ano);
			}else if(d == 8 && dia>0 && dia<=31 ){
				printf("%d de agosto de %d\n", dia, ano);
			}else if(d == 9 && dia>0 && dia<= 30){
				printf("%d de setembro de %d\n", dia, ano);
			}else if(d == 10 && dia>0 && dia<= 31) {
				printf("%d de outubro de %d\n", dia, ano);
			}else if(d == 11 && dia>0 && dia<=30 ) {
				printf("%d de novembro de %d\n", dia, ano);
			}else if(d == 12 && dia>0 && dia<= 31) {
				printf("%d de dezembro de %d\n", dia, ano);
			}else{
				printf("Data invalida!\n");
			} 
		
	
	return 0;
}
