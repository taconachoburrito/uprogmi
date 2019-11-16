#include<stdio.h>

int main(void){
   char rec[11],p;
   int i,j;
   printf("Upisite rijec > ");
   fgets(rec,11,stdin);
   for(i=0;i<10-1;i++){
      for(j=0;j<10-i-1;j++){
         if(rec[j] > rec[j+1]){
            p = rec[j];
            rec[j] = rec[j+1];
            rec[j+1] = p;
         }
      }
   }
   printf("%s\n",rec);
   return 0;
}