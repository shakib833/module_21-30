#include<stdio.h>
void rev(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        rev(n-1);

    }
}
int main(){
    rev(6);
return 0;
}