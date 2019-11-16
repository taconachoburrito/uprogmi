#include<stdio.h>
#define brR 2
#define brS 6

int main(void){
   int i,j,polje[brR][brS],suma[brS]={0},max[brS]={0};
   printf("Upisite elemente polja > \n");
   for(i=0;i<brR;i++){
      for(j=0;j<brS;j++){
         scanf("%d",&polje[i][j]);
      }
   }
   for(i=0;i<brS;i++){
      for(j=0;j<brR;j++){
         suma[i]+=polje[j][i];
         if(max[i]<polje[j][i]){
            max[i]=polje[j][i];
         }
      }
   }
   printf("Indeksi stupaca: \n");
   for(i=1;i<brS;i++){
      if(max[i]==suma[i-1]){
         printf("%d\n",i+1);
      }
   }
   return 0;
}