#include<stdio.h>

int main(void){
   int i,j,m,n,k=0,t=0;
   printf("Upisi 2 broja > ");
   scanf("%d %d",&m,&n);
   int niz[n-m];
   for(i=m;i<=n;i++){
      for(j=2;j<i;j++){
         if(i%j==0){
            t++;
         }
      }
      if(t==0){
         niz[k++]=i;
      }
      t=0;
   }
   printf("%d\n",k);
   if(k!=0){
      printf("Prosti brojevi u intervalu[%d,%d] su:\n",m,n);
      for(i=0;i<k;i++){
         printf("%d\n",niz[i]);
      }
      printf("Ukupno prostih brojeva %d.\n",k);
   }else{
      printf("Ne postoje prosti brojevi u intervalu [%d,%d].\n",m,n);
   }
   return 0;
}