#include <stdio.h>

int main(){
    
    int v1[9], v2[9], n=123456789;
    int i, j, k;
    
    for(i = 0; n !=0; i++){
        v1[i] = n % 10;
        n = n / 10;
        v2[i] = 1;
    }
    
    for(j=0; j<i; j++){
        printf("%d", v1[j]);
    }
    
    printf("\n");
    
    for(j=0; j<i; j++){
        for(k=1; k <= v1[j]; k++){
            v2[j] = v2[j]*2;
        }
    }
    
    for(j=0; j<i; j++){
        printf("%d\n", v2[j]);
    }
    
    return 0;
}