#include<stdio.h>
int main(){
    int x = 5, y = 7, z = 9;
    int *ptr;

    ptr = &x;
    printf("decimal : %d ",ptr);
    printf(" Hexadecimal: %p ",ptr);
return 0;
}