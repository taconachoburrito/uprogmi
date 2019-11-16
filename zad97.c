#include<stdio.h>

int main(void){
   int m,n,i,j,k;
   printf("Upisite brojeve m i n > ");
   scanf("%d %d",&m,&n);
   int br[m][n];
   int sort;
   printf("Upisite elemente matrice > ");
   for(i=0;i<m;i++){
      for(j=0;j<n;j++){
         scanf("%d",&br[i][j]);
      }
   }
   for(k=0;k<n;k++){
      for (i = 0; i < m-1; i++){       
         for (j = 0; j < m-i-1; j++) {
            if (br[j][k] > br[j+1][k]){ 
               sort = br[j][k];
               br[j][k] = br[j+1][k];
               br[j+1][k] = sort;
            }
         }
      } 
   }
   for(i=0;i<m;i++){
      for(j=0;j<n;j++){
         printf("%d ",br[i][j]);
      }
      printf("\n");
   }
   return 0;
}