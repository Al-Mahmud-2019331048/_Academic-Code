#include <stdio.h>

int main()
{
    float R1, R2, R3,a,b,c,A,B,C,s,tri_area,brittokola1,brittokola2,brittokola3,area;
    scanf("%f %f %f", &R1, &R2, &R3 );
    a=R1+R2;
    b=R2+R3;
    c=R3+R1;
    s=(a+b+c)/2;
    tri_area=sqrt(s*(s-a)*(s-b)*(s-c));
    A=acos((b*b+c*c-a*a)/(2*b*c));
    B=acos((c*c+a*a-b*b)/(2*c*a));
    C=acos((a*a+b*b-c*c)/(2*a*b));
    brittokola1=0.5*R1*R1*B;
    brittokola2=0.5*R2*R2*C;
    brittokola3=0.5*R3*R3*A;
    area=tri_area-brittokola1-brittokola2-brittokola3;
    printf("area = %f\n", area);
    return 0;
}
