#include<stdio.h>

int main(void){
   char sahPolje[9][9];
   int i,j;
   for(i=0;i<9;i++){
      for(j=0;j<9;j++){
         if(j==0 && i!=8){
            sahPolje[i][j]=8-i;
         } else if(i==8 && j!=0){
            sahPolje[i][j]='A' + (j-1);
         }else if(i==6){
            sahPolje[i][j]='P';
         } else if((i+j)%2 == 0 && j!=0){
            sahPolje[i][j] = 'X';
         } else {
            sahPolje[i][j] = ' ';
         }
      }
   }
   printf("%d",8);
   for(i=0;i<9;i++){
      for(j=0;j<9;j++){
         if(j==0 && i!=8){
            printf("%d",8-i);
         }
         printf("%c",sahPolje[i][j]);
      }
      printf("\n");
   }
   return 0;
}