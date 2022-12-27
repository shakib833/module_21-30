#include<stdio.h>
int main(){
    int w = 1, x = 5, y = 7, z = 9;
    int *ptr;

    ptr = &w;
    printf(" Decimal : %d \n",ptr);
    printf(" Hexadecimal: %p \n",ptr);
    printf(" Value : %d \n\n\n",*ptr);
    ptr = &x;
    printf(" Decimal : %d \n",ptr);
    printf(" Hexadecimal: %p \n",ptr);
    printf(" Value: %d \n\n\n",*ptr);
    ptr = &y;
    printf(" Decimal : %d \n",ptr);
    printf(" Hexadecimal: %p \n",ptr);
    printf(" Value: %d \n\n\n",*ptr);
    ptr = &z;
    printf(" Decimal : %d \n",ptr);
    printf(" Hexadecimal: %p \n",ptr);
    printf(" Value: %d \n",*ptr);
return 0;
}