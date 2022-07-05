#include <stdio.h>

int main(){
	
	int num, p=0, i=0, impar=0, par=0;
	float mediap, mediai;
	
	while(1){
		scanf("%d", &num);
		if(num==0){
            break;
		}
		if(num%2 == 0){
			par+=num;
			p++;
		}else{
			impar+=num;
			i++;
		}
	}
    mediap = (float)par/p;
    mediai = (float)impar/i;
	printf("MEDIA PAR: %f\n", mediap);
	printf("MEDIA IMPAR: %f\n", mediai);
	
	return 0;
}
