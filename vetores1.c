#include <stdio.h>

int main()
{
    double media=0, v[50];
    
    for(int i=0; i<50; i++){
        scanf("%lf", &v[i]);
        media += v[i]; 
    }
    
    media /=50;
    
    printf("a media e = %.2lf", media);
    return 0;
}