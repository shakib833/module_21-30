#include<stdio.h>
int d = 90; //Global Variable.
void add_two_Num()
{
    int a,b; // local variable.
    int d=50;
    scanf("%d %d",&a,&b);
    int sum = a+b;
    printf("%d\n",sum);
    printf("ami add function theke bolci: %d\n",d);
    d++;
    printf("ami add function theke bolci: %d\n",d);
    {
        extern int d;  // ekoi name thakar por ow jodi global variale use korte chai
        printf("ami add function er global variable theke bolci: %d\n",d);
    }

}


int main(){
     printf("ami main function theke bolci: %d\n",d);
    add_two_Num();

    printf("ami main function theke bolci: %d\n",d);
return 0;
}
