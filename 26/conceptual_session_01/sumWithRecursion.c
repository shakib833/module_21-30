#include<stdio.h>
int sum(int n)
{
    if (n>0)
    {
        return sum(n-1)+n; 
    }
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d ",sum(n));

return 0;
}