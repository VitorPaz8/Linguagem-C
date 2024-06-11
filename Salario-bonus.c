/*Programa que informa o total que um vendedor ira receber
no final do mês, este vendedor ganha um salario fixo e mais
15% de comissão sobre suas vendas efetuadas*/

#include <stdio.h>
 
int main() {
    
 char name;
    double vend, vt, sal;
    
    scanf("%s %lf %lf", &name, &sal, &vend);
    vt = sal+((vend/100)*15);
    
    printf("TOTAL = R$ %.2lf\n", vt);

    return 0;
}