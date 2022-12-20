#include<stdio.h>
int main(){
   int a = 458;
   int* p;

   p = &a;

   printf("%p \n",p); 
   printf("%d \n",*p); 

   char aa = 'A';
   char* al;

   al= &aa;
   printf("%p \n",al); 
   printf("%c \n",*al); 

return 0;
}