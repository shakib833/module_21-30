
#include<stdio.h>
int main(){
    int a,b;
    printf("%p\n   \n  \n",&a);
    printf("%p\n  \n  \n",&b);
    int i;
    char ara[] = {};
    for ( i = 0; i < 20; i++)
    {
        printf("%p\n",&ara[i]);
        
    }
    
return 0;
}