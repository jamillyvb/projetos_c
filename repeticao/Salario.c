#include <stdio.h>

int main(){

    int matricula;
    float horas;
    double hsal, salario;
	
	while(1){
		scanf("%d %f %lf", &matricula, &horas, &hsal); 
    	
    	if(matricula!=0 && horas!=0 && hsal!=0){
			salario = horas*hsal;
		}else{
			return 0;
		}
		printf("%d %.2lf\n", matricula, salario);
	} 
     
    return 0;
}
