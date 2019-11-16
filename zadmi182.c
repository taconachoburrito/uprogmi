#include<stdio.h>

int main(void){
   int m,n,i,j,max,suma,red;
   printf("Upisite m i n > ");
   scanf("%d %d",&m,&n);
   int mat[m][n];
   for(i=0;i<m;i++){
      for(j=0;j<n;j++){
         scanf("%d",&mat[i][j]);
      }
   }
   for(i=0;i<m;i++){
      suma=0;
      for(j=0;j<n;j++){
         suma += mat[i][j];
      }
      if(i==0){
            max = suma;
            red = i;
      }
      if(suma>max){
         max = suma;
         red = i;
      }
   }
   printf("Najveci redak je :  \n");
   for(i=0;i<n;i++){
      printf("%d",mat[red][i]);
   }
   return 0;
}