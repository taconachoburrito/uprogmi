#include<stdio.h>

int main(void){
   char niz[101],znak;
   int index,i,j,k;
   printf("Upisi niz > ");
   fgets(niz,101,stdin);
   for(i=0;i<101;i++){
      if(niz[i]=='\0'){
         niz[i-1]=' ';
         k=i;
         break;
      }
   }
   printf("Učitan niz:%s\n",niz);
   printf("Upisi indeks i znak > ");
   scanf("%d %c",&index,&znak);
   i=0;
   while(niz[i]!='\0' || niz[index]!='\0'){
      if(i==index){
         for(j=k;j>=i;j--){
            niz[j+1]=niz[j];
         }
         niz[i]=znak;
         break;
      }
      i++;
   }
   printf("Novi niz: %s\n",niz);
   return 0;
}