#include<stdio.h>
int main(){
    int a=7;
    double b=9.56;
    char c ="a";
    int*  pi;
    double* pd;

    pi = &a;
    pd = (double*) pi;

    // b= (double)25/4;
    //  a=c;
    //  c=105;

    printf("%d %lf %c",a,b,c);
    printf("%p %p",pi,pd);
return 0;
}