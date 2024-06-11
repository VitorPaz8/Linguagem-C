#include <stdio.h>

int main()
{
    int t1, t2, result=0;
    
    //escaneando o tamanho das sequencias
    scanf("%d", &t1);
    scanf("%d", &t2);
    
    int v1[t1], v2[t2];
    
    //escaneando sequencias
    for(int i=0; i<t1; i++){
        scanf("%d", &v1[i]);
    }
    for(int i=0; i<t2; i++){
        scanf("%d", &v2[i]);
    }
    
    //fazendo a comparação
    for(int i=0; i<=t2-t1; i++){
        int j;
        for(j=0; j<t1; j++){
            
            if(v2[i+j] != v1[j])
                break;
        }
        if(j == t1)
            result++;
    }
    printf("Resultado = %d", result);
    
    return 0;
}