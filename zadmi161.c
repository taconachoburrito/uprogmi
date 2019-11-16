#include<stdio.h>

int main(void){
   int j,count;
   unsigned int i;
   for(i = 1;i<10000;i++){
      count = 0;
      for(j=31;j>=0;j--){
         if(i>>j & 1 == 1){
            count++;
         }
      }
      if(count==4){
         printf("%u\n",i);
      }
   }
   return 0;
}