#include <math.h>
#include <stdio.h>

int main(){
	
	int x1, x2, y1, y2;
	float X;

	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	
    X = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
	printf("A DISTANCIA ENTRE A e B = %.2f\n", X);
	
	return 0;
}