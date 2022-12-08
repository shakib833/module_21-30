#include<stdio.h>
void find_parity(int x);
int main(){
    int n;
    scanf("%d",&n);
    find_parity(n);

return 0;
}

















void find_parity(int x)
{
    if (x % 2 == 0)
        printf("Even");
    else
        printf("Odd");
    // jehetu void tai retuen type thakbe na tobe 
    // just retuen; likleo kono problem hobe na
}