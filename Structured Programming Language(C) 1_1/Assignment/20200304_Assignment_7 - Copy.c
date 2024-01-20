/* CSE 134: Structured Programming Language Lab for Session 2019-20 (B)
B
Assignment # 07 (Unfilled Triangle)
Enamul Hassan
•
Mar 5, 2020
100 points
Due Mar 8, 2020, 11:59 PM
Class comments
Your work
Turned in

unfilledtriangle.c
*/


#include <stdio.h>

int main()
{
    int i,j,N;
    printf("Enter Number Of N: \n");
    scanf("%d" , &N);
    for( i=1; i<=N; i++)
    {
    for( j=i; j<N; j++)
        {
            printf("  ");
        }
        for( j=1; j<=(2*i-1); j++)
        {
            if(i==N || j==1 || j==(2*i-1))
            {
                printf ("* ");
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }

    return 0;
}
