#include <stdio.h>

int main(){

    int matricula, quant1, quant2;
    float salM, salL, salB, impRenda, precoT1, precoT2, tel1, tel2, comissao=0;

    scanf("%f %f %f %f", &salM, &impRenda, &precoT1, &precoT2);

    while(1){
        scanf("%d %d %d", &matricula, &quant1, &quant2);
        if(matricula==0 && quant1==0 && quant2==0){
            break;
        }        
        if(quant1>=10){
            tel1 = (0.14*precoT1);
        }else{
            tel1 = (0.13*precoT1);
        }
        if(quant2>=20){
            tel2 = (0.13*precoT2);
        }else{
            tel2 = (0.12*precoT2);
        }
        salB = (tel1*(float)quant1)+(tel2*(float)quant2)+salM;
        
        if(salB > impRenda){
            salL = salB-;
        }
        printf("MATRICULA = %d, SALARIO BRUTO = %.2f, SALARIO LIQUIDO = %.2f\n", matricula, salB);
    }

    return 0;
}