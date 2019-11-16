#include<stdio.h>

int main(void){
   int n,i,j;
   printf("Upisite broj pretinaca > ");
   scanf("%d",&n);
   struct pret {
      int kod,v,d,s,vol;
   } pr[n],sort;
   
   for(i = 0;i<n;i++){
      printf("Upisite vrijednosti %d.pretinaca: > ",i+1);
      scanf("%d %d %d %d",&pr[i].kod,&pr[i].v,&pr[i].s,&pr[i].d);
      pr[i].vol = pr[i].s * pr[i].v * pr[i].d;
   }
   for(i=0;i<n-1;i++){
      for(j=0;j<n-i-1;j++){
         if(pr[j].vol < pr[j+1].vol){
            sort = pr[j];
            pr[j] = pr[j+1];
            pr[j+1] = sort;
         }
      }
   }
   for(i = 0;i<n;i++){
      printf("%d = %d litara\n",pr[i].kod, pr[i].vol);
   }
   return 0;
}