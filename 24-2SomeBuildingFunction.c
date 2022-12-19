#include<stdio.h>
#include<math.h>
int main()
{
    int a=3, b=3;
        printf("%f \n",pow(a,b));
        printf("%f \n",sqrt(a));
        printf("%f \n",sqrt(a*b));
        printf("%f \n",sqrt(a+b));
        printf("%f \n",sqrt(a-b));
        printf("%f \n",sqrt(a/b));
        printf("%f \n",sqrt(a%b));

    // absoulate valu = Negative/positibve jai thakuk output always positive hbe.
    int c = -9,d=20;
        printf("%d \n",abs(c));
        printf("%d \n",abs(-90));
        printf("%d \n",abs(d));
        printf("%d \n",abs(83));

    int e = -45,ans;
        ans =  abs(e);
        printf("%d \n",ans);

    // some Trigonomitry Function.

    float anss,cosans;

        anss = sin(3.141593);
        cosans = cos(3.141593/2);                 // pai(3.1415) radian manei 180 deg.
        printf("%f \n",anss);
        printf("sin 90deg = %f \n",sin(3.141593/2));
        printf("cos 90deg = %d \n",abs(cosans));
     float deg;
     scanf("%f \n",&deg);
     deg = (deg * 3.2426)/180;
     printf("%f \n",deg);

    return 0;
}
