#include<stdio.h>

int main(void){
   int i=0,k=65,l=0;
   char rec[101],nniz[101];
   printf("Upisite niz > ");
   fgets(rec,101,stdin);
   while(rec[i]!='\0'){
      if(rec[i]>=k && rec[i]<=k+25){
         nniz[l++]=rec[i];
         k=97;
      }
      i++;
   }
   nniz[l] = '\0';
   printf("Novi niz: %s\nUlazni niz: %s",nniz,rec);
   return 0;
}