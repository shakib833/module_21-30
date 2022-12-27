#include<stdio.h>
int main(){
    int x = 10,y=20,sum;
    int minus,div,mod,mul;
    int *ptr1, *ptr2;

    ptr1 = &x;
    ptr2 = &y;

    sum   = *ptr1 + *ptr2;
    minus = *ptr1 - *ptr2;
    mul   = *ptr1 * *ptr2;
    mod   = *ptr1 % *ptr2;

    printf("Sum = %d\n",sum);
    printf("Minus = %d\n",minus);
    printf("Multipication = %d\n",mul);
    printf("Modulus = %d\n",mod);
return 0;
}