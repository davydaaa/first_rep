#include <stdio.h>
#include <math.h>

int main()
{
    float x,y;
    x = 0.067;
    y = 3.017;

    printf("x = %f\n", x);

    printf("y = %f\n", y);

    float Sum;
    Sum = 137 * pow(x, 3)+cos(pow(y,3)/pow(x,4))+tan(14*y)-7*pow(x,6);

    printf("sum = %f", Sum);

    return 0;

}
