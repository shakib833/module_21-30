//sum of digits is prime number
// 1231 --> 1+2+3+a = 7 prime (shakib's Numbers)

#include<stdio.h>

int sum_of_digits(int a)
{
    int summ = 0;
    while (a>0)
    {
        summ += (a%10);
        a /= 10;
    }
    return summ;
}
int is_prime(int n)
{
    int i;
    for ( i = 2; i < n; i++)
    {
        if (n%i == 0)
            return 0;        
    }
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    int sod = sum_of_digits(n);

    if (is_prime(sod)==1)
    // we can use dirictly  if (is_prime(sum_of_digits(n))==1)
        printf("Shakib Numbers.");
    
    else
        printf("No\n");
    
return 0;
}