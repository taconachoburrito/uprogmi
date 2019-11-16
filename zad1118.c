#include<stdio.h>

int main(void){
   int n,i,j,k=1;
   printf("Upisite broj osoba > ");
   scanf("%d",&n);
   struct osobe {
      int kod, god;
   } o[n],pom;
   for(i=0;i<n;i++){
      printf("Upisite matbr i god. %d. osobe > ",i+1);
      scanf("%d %d",&o[i].kod,&o[i].god);
      for(j=0;j<i;j++){
         if(o[i].god != o[j].god){
            k++;
         }
      }
   }
   for(i=0;i<n-1;i++){
      for(j=0;j<n-1-i;j++){
         if(o[j].god > o[j+1].god){
            pom = o[j];
            o[j] = o[j+1];
            o[j+1] = pom;
         } else if(o[j].god == o[j+1].god){
               if(o[j].kod > o[j+1].kod){
                  pom = o[j];
                  o[j] = o[j+1];
                  o[j+1] = pom;
               }
            }
         }
      }
   int tgod = o[0].god;
   printf("%d. godina: \n",tgod);
   for(i=0;i<n;i++){
      if(tgod != o[i].god){
         tgod = o[i].god;
         printf("%d. godina: \n",tgod);
      }
      printf("\t%d\n",o[i].kod);
   }
   return 0;
}