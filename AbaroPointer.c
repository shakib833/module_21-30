#include<stdio.h>
int main(){
    int x = 5,c=8;
    int *ptr,*b;

    ptr = &x;
    b = &c;

    printf("%d\n",x);

    printf("%d\n",&x);

    printf("%d\n",ptr);

    printf("%d\n",*ptr);

    printf("%d\n",&ptr);

    printf("M.A of C = %d\n",&c);

    printf("M.A of C = %d\n",b);
    printf("Storage value of C = %d\n",*b);
    printf("Storage value of C = %d\n",c);
return 0;
}