#include <stdio.h>

int main(void) {
   unsigned int n;
   printf("Upisite nenegativni cijeli broj >");
   scanf("%u",&n);
   printf("%u(10) = ",n);
   for(int posmakDesno = 31;posmakDesno>=0;posmakDesno--){
      printf("%d",n >> posmakDesno & 0x1);
   }
   printf("(2)\n");
   return 0;
}