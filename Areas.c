/*Programa que calcula a area de uma forma geometrica
  de acordo com a preferencia do usuario*/

#include <stdio.h>

int main(){

    char fg;
    float lado1, lado2, result;

    printf("O gue gostaria de calcular?\n");
    printf("Para quadrado = q;\nPara circulo = c;\nPara retangulo = r.\n");
    scanf("%c", &fg);

    if(fg == 'q'){

        printf("Qual o valor do lado?\n");
        scanf("%f", &lado1);

        result = lado1 * lado1;

        printf("A area do quadrado e = %.1f\n", result);

    }else if(fg == 'c'){

        printf("Qual o valor do raio do circulo?\n");
        scanf("%f", &lado1);

        result = 3,14 * (lado1 * lado1);

        printf("A area do quadrado e = %.1f\n", result);

    }else if(fg == 'r'){

        printf("Qual o valor da base e da altura?\n");
        scanf("%f %f", &lado1, &lado2);

        result = lado1 * lado2;

        printf("A area do retangulo e = %.1f\n", result);

    }else
        printf("Caracter invalido.\nApenas c, q ou r.\n");

return 0;
}