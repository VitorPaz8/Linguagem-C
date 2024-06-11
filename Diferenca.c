/*Leia quatro valores inteiros, calcule e mostre
a diferença do produto de A e B pelo produto de C e D.*/

#include <stdio.h>
 
int main() {
    
    int a, b, c, d, dir;
    
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    dir = (a*b) - (c*d);
    
    printf("DIFERENCA = %d\n", dir);
 
    return 0;
}