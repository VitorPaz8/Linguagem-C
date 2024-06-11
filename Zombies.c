/*Esse coódigo consiste em ler e atualizar uma matriz comparando os numeros 0, 1
  e 2, onde cada valor significa:
  0 - casa vazia;
  1 - casa com zumbi;
  2 - casa com humano. 
  E de acordo com isso o código aplica as leis de interação entre os visinhos, atualizando as casas
  da matriz e mostrando os resultados com o numero de interações que o usuario pedir*/

#include <stdio.h>

int main(void){
  int m=0, n=0, i=0, max_linha=0, max_coluna=0, dias=0, VZ=0, VH=0, c=0;
  int viz[8], mat[51][51], n_mat[51][51], op[2][2];

  scanf("%d %d", &m, &n);
  scanf("%d", &i);

  max_linha = m;
  max_coluna = n;
  dias = i;

  for(m=0; m<max_linha; m++){
    for(n=0; n<max_coluna; n++){
      scanf("%d", &mat[m][n]);
      n_mat[m][n]=mat[m][n];
    }
  }
  
  printf("\n\nInteracao 0\n");
  for(m=0; m<max_linha; m++){
    for(n=0; n<max_coluna; n++){
      printf("%d ", mat[m][n]);
    }
    printf("\n");
  }

  for(i=1; i<dias; i++){
    printf("\n\nInteracao %d\n", i);
    for(m=0; m<max_linha; m++){
      for(n=0; n<max_coluna; n++){
        VZ = 0;
        VH = 0;

        if(m == 0){
          op[0][0] = max_linha-1;
          op[0][1] = m+1;
        }else if(m == max_linha-1){
          op[0][0] = m-1;
          op[0][1] = 0;
        }else{
          op[0][0] = m-1;
          op[0][1] = m+1;
        }

        if(n == 0){
          op[1][0] = max_coluna-1;
          op[1][1] = n+1;
        }else if(n == max_coluna-1){
          op[1][0] = n-1;
          op[1][1] = 0;
        }else{
          op[1][0] = n-1;
          op[1][1] = n+1;
        }

        viz[0]=mat[op[0][0]][n];
        viz[1]=mat[op[0][1]][n];

        viz[2]=mat[op[0][0]][op[1][0]];
        viz[3]=mat[op[0][0]][op[1][1]];

        viz[4]=mat[op[0][1]][op[1][0]];
        viz[5]=mat[op[0][1]][op[1][1]];

        viz[6]=mat[m][op[1][0]];
        viz[7]=mat[m][op[1][1]];

        if(mat[m][n]==1){
          for(c=0; c<8; c++){
            if(viz[c]==2){
              VZ=1;
              break;
            }
          }
          if(VZ==1){
            n_mat[m][n] = 2;
          }
        }else if(mat[m][n]==2){
          for (c = 0; c < 8; c++) {
            if(viz[c]==1){
              VH++;
            }
          }
          if(VH>=2 || VH==0){
            n_mat[m][n] = 0;
          }
        }else{
          for(c=0; c<8; c++){
            if(viz[c] == 1){
              VH++;
            }
          }
          if(VH == 2){
            n_mat[m][n] = 1;
          }
        }
      }
    }
    for(int i=0; i<max_linha; i++){
      for(int j=0; j<max_coluna; j++){
        mat[i][j] = n_mat[i][j];
      }
    }
    for(int i=0; i<max_linha; i++){
      for(int j=0; j<max_coluna; j++){
        printf("%d ", mat[i][j]);
      }
      printf("\n");
    }
  }
  return 0;
}