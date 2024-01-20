#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    float r,R;
    printf("R,n\n");
    scanf("%f %d",&R,&n);

    r=(R*sin(3.14/n))/((sin(3.14/n))+1);
    printf("r:%f\n",r);
    return 0;
}
