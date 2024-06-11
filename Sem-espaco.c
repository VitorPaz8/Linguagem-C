#include <stdio.h>

int main()
{
    int i, j=0;
    char v[81];

    fgets(v,81,stdin);
    
    for(i=0; i<81; i++){
        
        if(v[i]!=' '){
            v[j] = v[i];
            j++;
        }
    }
    
    v[j] = '\0';
   
    printf("%s", v);
    
    return 0;
}