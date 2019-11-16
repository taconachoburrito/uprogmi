#include<stdio.h>

int main(void){
   int n;
   printf("Upisite dekadski broj > ");
   scanf("%d",&n);
   while(n!=0){
      printf("Oktalni: %o\n",n);
      printf("Heksadekadski: %X\n",n);
      printf("Upisite dekadski broj > ");
      scanf("%d",&n);
   }
   return 0;
}