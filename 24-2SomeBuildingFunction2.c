#include<stdio.h>
#include<math.h>
#define PI 3.14159  // custome Define
int main()
{


     float deg;
     scanf("%f",&deg);
     deg = sin((deg * PI)/180);
     printf("%0.4f \n",deg);

    return 0;
}

