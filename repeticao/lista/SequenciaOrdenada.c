#include <stdio.h>

int main()
{
    int n, i, flag;
    float xa, xd;
    scanf("%d", &n);
    while (n != 0)
    {
        flag = 0;
        scanf("%f", &xa);
        for(i=1; i<n; i++){
            scanf("%f", &xd);
            if(xd < xa){
                flag = 1;
            }
            xa = xd;
        }
        if (flag == 0) printf("ORDENADA\n");
        else printf("DESORDENADA\n");
        scanf("%d", &n);
    }
    return 0;
}