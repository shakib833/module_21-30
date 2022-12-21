#include<stdio.h>
int main(){
    int a = 5;
    printf("%d \n",a);
    int* p = &a;
    printf("%p \n",p);
    printf("ami akhn P te : %d  \n",*p);

    int** q = &p;
    printf("%p \n",q);
    printf("Ami akhn Q te :%d \n",**q);
    **q = 7;
    printf("%d\n",a);
return 0;
}