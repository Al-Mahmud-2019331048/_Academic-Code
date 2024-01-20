#include<stdio.h>
int main()
{
    float num;
    printf("The obedient number is: ",num);
    scanf("%f",&num);
    if(num>100){
    printf("Invalid");
    }
    else if(num>=80){
        printf("A+, Grade POint:4.00");
    }
    else if(num>=75){
        printf("A, Grade Point:3.75");
    }
    else if(num>=70){
        printf("A-, Grade Point:3.50");
    }
    else if(num>=65){
        printf("B+,Grade Point:3.25");
    }
    else if(num>=60){
        printf("B,Grade Point:3.00");
    }
     else if(num>=55){
        printf("B-, Grade Point:2.75");
    }
    else if(num>=50){
        printf("C+,Grade Point:2.50");
    }
    else if(num>=45){
        printf("C,Grade Point:2.25");
    }
     else if(num>=40){
        printf("C-, Grade Point:2.00");
    }
    else {
        printf("F,Grade Point:0.00");
    }

    return 0;
}
