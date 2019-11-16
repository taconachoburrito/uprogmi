#include<stdio.h>
#include<math.h>
int main(void){
   char niz[11],i=0;
   int indicator=0,broj=0;
   float korijen;
   printf("Upis > ");
   fgets(niz,11,stdin);
   while(niz[i]!='\0'){
      if(niz[i]=='\n') break;
      if(niz[i]<'0' || niz[i]>'9'){
         indicator++;
         break;
      }
      broj = broj*10 +(niz[i]-48);
      i++;
   }
   if(indicator!=0){
      printf("Dopustene su samo dekadske znamenke!\n");
   }else{
      korijen = sqrt(broj);
      printf("%s\b %.2f\b",niz,korijen);
   }
   return 0;
}