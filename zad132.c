#include<stdio.h>

int main(void){
   unsigned int n;
   printf("Upisite nenegativni cijeli broj > ");
   scanf("%u",&n);
   printf("%u(10) = ",n);
   for(int i = 30;i>=0;i-=3){
      printf("%d", n >> i & 0x7);
   }
   printf("(8)\n");
   return 0;
}