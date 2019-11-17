#include<stdio.h>
int main(void){
   int n,i,max;
   do{
      printf("Upisite broj izmedu 1 i 50 > ");
      scanf("%d",&n);
   }while(n<1 || n>50);
   int niz[n*2];
   printf("Upisite parove: \n");
   for(i=0;i<(n*2);i=i+2){
      scanf("%d %d",&niz[i],&niz[i+1]);
      max = i==0 ? niz[i]+niz[i+1] : (max<(niz[i]+niz[i+1])? max=niz[i]+niz[i+1]: max);
   }
   for(i=0;i<n*2;i=i+2)
      if(niz[i]+niz[i+1]==max)
         printf("(%d,%d)\n",niz[i],niz[i+1]);
   return 0;
}