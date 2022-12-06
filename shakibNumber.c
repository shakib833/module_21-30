/*-----------------------------------------------------------------------------------------
Mone koro Shakib namer sonkha ase. jar 3 ti boisisto ase 
1. Obossoi '7' thakte hbe.
2. Digit summasition 10 er boro hote hobe.
3. Last Digit Obossoi Prime Number hbe.
-------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<math.h>
int shat_present(int n);
int dg_sum(int n);
int last_dig_prime(int n);
int main(){
    int n;
    scanf("d",&n);
    if (shat_present(n) == 1 && dg_sum(n)>10 && last_dig_prime(n) == 1)
    {
        printf("Shakib's Number\n");
    }
    else
        printf("NO.\n");
return 0;
}
int shat_present(int n)
{
    
    while (n>0)
    {
        if (n%10 == 7)
             return 1;

         n /=10;
    }
    return 0;
}
int dg_sum(int n)
{
    int sum = 0;
    while (n>0)
    {
        sum += (n%10);
        n/=10;
    }
    return sum;       
}

  int last_dig_prime(int n)
{
int ld;
while(n>0){
ld = n%10 ;
if (ld == 2 || ld == 3 || ld == 5 || ld == 7)
    {
    return 1;
    }
n/=10;
}
return 0;

}
