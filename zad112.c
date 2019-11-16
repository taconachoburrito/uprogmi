#include<stdio.h>

int main(void){
   char rec[21];
   int max;
   printf("Upisi rijeci > ");
   fgets(rec,21,stdin);
   for(int j = 0;j<21;j++){
      if(rec[j] == '\n'){
         rec[j] = ' ';
      }
   }
   printf("Trenutni niz: %s\n",rec);
   max = rec[0];
   for(int i = 1;i<21;i++){
      if(rec[i] > max){
         max = rec[i];
      }
   }
   printf("Max ASCII vrijednost je: %d.\n",max);
   return 0;
}