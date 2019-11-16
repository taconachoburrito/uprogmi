#include<stdio.h>

int main(void){
   char ulazniNiz[21],ms[21],vs[21];
   int i,j,k=0,l=0;
   printf("Upisati niz > ");
   fgets(ulazniNiz,21,stdin);
   for(i = 0;i<21;i++){
      if(ulazniNiz[i] == '\n'){
         ulazniNiz[i] = ' ';
      }
   }
   for(i = 0;i<21;i++){
      if(ulazniNiz[i]>='A' && ulazniNiz[i]<='Z'){
         vs[k] = ulazniNiz[i];
         k++;
      }else if(ulazniNiz[i]>='a' && ulazniNiz[i]<='z'){
         ms[l] = ulazniNiz[i];
         l++;
      }
   }
   ms[l] = vs[k] = '\0';
   printf("Velika slova: %s,%d\nMala slova: %s,%d",vs,k,ms,l);
   return 0;
}