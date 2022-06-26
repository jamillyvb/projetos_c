#include <stdio.h>
//(n1+n2×3+n3×5)%7

int main (){

    int num, n1, n2, n3, n4, n, u, d, c;

    scanf("%d", &num);

    c = num/100;
    d = (num%100)/10; 
    u = num%10;
    
    n4 = (c+(d*3)+u*5)%7;
    n = c*1000+d*100+u*10+n4;
    printf("O NOVO NUMERO E = %d\n", n);

    return 0;
}