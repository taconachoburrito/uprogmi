#include<stdio.h>

int main(void){
   int n;
   printf("Upisite vrijednost > ");
   scanf("%d",&n);
   while((n>=48 && n<=57)||(n>=65 && n<=90)||(n>=97 && n<=122)){
      printf("%d > %c\n",n,n);
      printf("Upisite vrijednost > ");
      scanf("%d",&n);
   }
   return 0;
}