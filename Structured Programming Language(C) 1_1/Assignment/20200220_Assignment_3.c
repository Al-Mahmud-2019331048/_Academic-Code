#include <stdio.h>

int main()
{
    float a,cube_volume,circle_volume,volume;
    printf("enter the value of a:\n");
    scanf("%f",&a);
    cube_volume=a*a*a;
    circle_volume=(4/3)*3.1416*(a/2)*(a/2)*(a/2);
    volume =cube_volume-circle_volume;
    printf("Area = %f\n", volume);
    return 0;
}
