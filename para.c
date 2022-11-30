#include<stdio.h>
#include<conio.h>


//declare a function 
    void sum_of_all(int num)
    {
        int n,num,sum=0;
        for ( n = 0; n <= num; n++)
        
            sum += n;
            getch();
        printf("Sum of all Numbers 1 to %d is : %d",num,sum);
    }
    void main(void)
    {
        sum_of_all(10);
    }
