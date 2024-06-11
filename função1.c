#include <stdio.h>

double potf(double a, int b);

int main()
{
    double pot, a;
    int b;
    
    scanf("%lf", &a);
    scanf("%d", &b);
    
    pot = potf(a,b);
    
    printf("%lf", pot);
    
    return 0;
}

double potf(double a, int b)
{
    double aux;
    int i=1;
    
    aux = a;
    while(i < b){
        aux *= a;
        i++;
    }
    
    return aux;
}