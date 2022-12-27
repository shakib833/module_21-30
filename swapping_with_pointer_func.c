#include<stdio.h>
void swapping(int *ptr1, int *ptr2)
{
    int temp;
    temp  = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
   // printf("After Swapping : \n x = %d y = %d\n",x,y);
}
int main(){
    int x = 10, y =20;
    printf("Before Swapping : \n x = %d y = %d\n",x,y);
 swapping(&x,&y);
    printf("Before Swapping : \n x = %d y = %d\n",x,y);  
return 0;
}