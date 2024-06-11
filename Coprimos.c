/*Programa que verifica numeros e diz se sao coprimos
  convertendo-os em 0 caso o numero nao seja coprimo
  ou em 1 caso seja coprimo (numeros coprimos são numeros
  que nao possuem divisores em comum alem do 1)*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int v[n], mat[n][n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    //Preenchendo a matriz com os valores de coprimalidade
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int a = v[i], b = v[j];
            while (b != 0) {
                int temp = b;
                b = a % b;
                a = temp;
            }
            //Se o MDC for igual a 1, os numeros sao coprimos
            if(a==1)
                mat[i][j] = 1;
            else
                mat[i][j] = 0;
        }
    }

    //Imprimindo a matriz
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}