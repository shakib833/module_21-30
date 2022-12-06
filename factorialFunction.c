#include<stdio.h>
#include<stdio.h>
int fact(int x); //Function er prototype.  Factorial ber kore dibe  
int main(){
    int n;
    scanf("%d",&n);
    int ans = fact(n);
     
     printf("Factorial = %d\n",ans);
return 0;
}
























































































int fact(int x)
{
    int res = 1;
    for (int i = 1; i <= x; i++)
    {
        res *= i;
    }
   
 return res;
}

