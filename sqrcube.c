#include<stdio.h>
#include<conio.h>

void square_num(void)
{
    int i, num ;
    printf("\n\n Number   Squre \n\n");
    for ( num = 1; num <=10 ; num++)
    printf("%d %d \n", num, num*num);
}
void cube_num(void)
{
    int i, num ;
    printf("\n\n Number   Squre \n\n");
    for ( num = 1; num <=10 ; num++)
    printf("%d %d \n", num, num*num*num);
}

void main(void)
{
    // clrsrc();
    printf("\n\n Press any key to see square number form 1 to 10. \n\n");
    getch();
    square_num();

    printf("\n\n Press any key to see Cube number form 1 to 10. \n\n");
    getch();
    cube_num();

    getch();
}