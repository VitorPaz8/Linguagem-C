/*Programa que lê quatro valores inteiros, calcula e mostra
a diferença do produto de A e B pelo produto de C e D.*/

#include <stdio.h>
 
int main() {
    
    int a, b, c, d, dir;
    
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    dir = (a*b) - (c*d);
    
    printf("DIFERENCA = %d\n", dir);
 
    return 0;
}
