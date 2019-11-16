#include<stdio.h>

int main(void){
   unsigned int n;
   printf("Upisite nenegativni cijeli broj > ");
   scanf("%u",&n);
   printf("%u(10) = ",n);
   for(int i = 28;i>=0;i-=4){
      int br = n >> i & 0xF;
      if(br>9){
         printf("%X",br);
      }else{
         printf("%d",br);
      }
   }
   printf("(16)\n");
   return 0;
}