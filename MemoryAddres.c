
#include<stdio.h>
int main(){

    int a,b;
    printf("%p\n",&a);
    int* p;
    p = &a;
    printf("%p\n",p);

    
return 0;
}