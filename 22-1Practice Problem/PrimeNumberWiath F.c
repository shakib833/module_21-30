#include<stdio.h>

    int isPrime(int n);
int main(){
   int n;
   scanf("%d",&n);

   if (isPrime(n) == 1)
    printf("Prime Number.");
   else 
    printf("Composite Number.");
    
return 0;
}



    int isPrime(int n)
    {
        int i;
        for ( i = 2; i < n; i++)
        {
            if (n%i == 0)
               return 0;     
        }              
          return 1; 
            
    }
    