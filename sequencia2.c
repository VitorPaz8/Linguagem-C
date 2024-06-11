#include <stdio.h>

int main()
{
    int v1[50], v2[50], result[50];
    int i, j, siga=1, p1=0, p2=0, p3=-1;
    
    printf("insira um valor(ou -1 para parar)\n");
    
    for(i=0; siga == 1 && i<50; i++){
        scanf("%d", &v1[i]);
        if(v1[i] == -1){
            break;
        }
        p1++;
    }
    
    for(i=0; siga == 1 && i<50; i++){
    
        scanf("%d", &v2[i]);
        if(v2[i] == -1){
            break;
        }
        p2++;
    }
    
    for(i=0; i<=p1; i++){
        for(j=0; j<=p2; j++){
            if(v1[i+j] == v2[j]){
                result[j] = v2[j];    
                p3++;
            }
        }
    }
    for(i=0; i<=p3; i++)
        printf("%d\n", result[i]);
    
    return 0;
}