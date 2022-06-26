#include <stdio.h>

int main(){
    
    int n, u, d, c, um;
    int cent, deze, uu;

    scanf("%d", &n);
    
    if(n>9999 || n<=0){
        printf("Numero invalido!\n");
        return 0;
    }
    
    u = n%10;
    d = (n%100)/10;
    c = (n%1000)/100;
    um =(n/1000);
    
    if(n<=9){
        printf("(primeira ordem)");
    }else if(n>=10 && n<=99){
        printf("(segunda ordem)");
    }else if(n>=100 && n<=999){
        printf("(terceira ordem)");
    }else if(n>=1000 && n<=9999){
        printf("(quarta ordem)");
    }
   
    printf(" %d = ", n);

    if(n<=9){    
        if(u>0 && u<=1){
            printf("%d unidade = %d", u, u);
        }else if(u>0 && u<=9){
            printf("%d unidades = %d", u, u);
        }
        printf("\n");
    }else if(n>=10 && n<=99){
        if(d>0 && d<=1){
            printf("%d dezena", d);
        }else if(d>0 && d<=9){
            printf("%d dezenas", d);
        }
        if(u>0){
            printf(" + ");
        }
        if(u>0 && u<=1){
            printf("%d unidade", u);
        }else if(u>0 && u<=9){
            printf("%d unidades", u);
        }
        printf(" = ");

        if(d!=0){
            printf("%d", d*10);
        }
        if(d!=0 && u!=0){
            printf(" + ");
        }
        if(u!=0){
            printf("%d", u);
        }
        printf("\n");

    }else if(n>=100 && n<=999){
        if(c>0 && c<=1){
            printf("%d centena", c);
        }else if(c>0 && c<=9){
            printf("%d centenas", c);
        }
       
        if(d>0 || u>0){
            printf(" + ");
        }

        if(d>0 && d<=1){
            printf("%d dezena", d);
        }else if(d>0 && d<=9){
            printf("%d dezenas", d);
        }
      
        if(d>0 && u>0){
            printf(" + ");
        }

        if(u>0 && u<=1){
            printf("%d unidade", u);
        }else if(u>0 && u<=9){
            printf("%d unidades", u);
        }
        printf(" = ");
        if(c!=0){
            printf("%d", c*100);   
        }
       
        if(d!=0 || u!=0){
            printf(" + ");
        }

        if(d!=0){
            printf("%d", d*10);   
        }

        if(d!=0 && u!=0){
            printf(" + ");
        }

        if(u!=0){
            printf("%d", u);   
        }
        printf("\n");

    }else if(n>=1000 && n<=9999){
        if(um>0 && um<=1){
            printf("%d unidade de milhar", um);
        }else if(um>0 && um<=9){
            printf("%d unidades de milhar", um);
        }
       
        if(c>0 && d==0 && u==0 || c==0 && d>0 && u==0 || c==0 && d==0 && u>0 || c>0 && d>0 && u>0 || c>0 || d>0 || u>0){
            printf(" + ");
        }

        if(c>0 && c<=1){
            printf("%d centena", c);
        }else if(c>0 && c<=9){
            printf("%d centenas", c);
        }
      
        if(c>0 && d>0 && u>0 || c>0 && d>0){
            printf(" + ");
        }
       
        if(d>0 && d<=1){
            printf("%d dezena", d);
        }else if(d>0 && d<=9){
            printf("%d dezenas", d);
        }
      
        if(u>0 && c>0 || d>0 && u>0){
            printf(" + ");
        }
        if(u>0 && u<=1){
            printf("%d unidade", u);
        }else if(u>0 && u<=9){
            printf("%d unidades", u);
        }
        printf(" = ");
        
        if(um!=0){
            printf("%d", um*1000);
        }

        if(c>0 && d==0 && u==0 || c==0 && d>0 && u==0 || c==0 && d==0 && u>0 || c>0 && d>0 && u>0 || c>0 || d>0 || u>0){
            printf(" + ");
        }

        if(c!=0){
            printf("%d", c*100);
        }

        if(c>0 && d>0 && u>0 || c>0 && d>0){
            printf(" + ");
        }

        if(d!=0){
            printf("%d", d*10);
        }

        if(u>0 && c>0 || d>0 && u>0){
            printf(" + ");
        }

        if(u!=0){
            printf("%d", u);
        }
        printf("\n");
    }
  
    return 0;
}