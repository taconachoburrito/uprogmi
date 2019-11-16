#include<stdio.h>

int main(void){
   int n,neg=0,i,znam[10] ={0},k,dj,l=1,z;
   printf("Upisite broj > ");
   scanf("%d",&n);
   while(n!=0){
      k=1;
      if(n<0){
         neg++;
      }
      dj = n;
      while(dj/10>0){
         k++;
         dj = dj/10;
         l = l * 10;
      }
      for(i=0;i<k;i++){
         z = n/l;
         znam[z]++;
         n = n % l;
         l = l/10;
      }
      l=1;
      printf("Upisite broj > ");
      scanf("%d",&n);
   }
   for(i=0;i<10;i++){
      printf("Broj znamenke %d: %d\n",i,znam[i]);
   }
   printf("Broj negativnih brojeva: %d\n",neg);
   return 0;
}