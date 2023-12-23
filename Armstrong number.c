/*
153  --->  1^3  +  5^3  +  3^3  =  153;  this is armstrong number

test cases ---> 
001,153,371,370,407
*/

#include <stdio.h>

main()
{
    int n,m,rem,sum=0;
    printf("enter n ");
    scanf("%d",&n);
    m=n;
    
    while (n>0) 
    {
        rem = n%10;
        sum += rem*rem*rem;
        n/=10;
    }
    if (sum == m)
        printf("Armstrong Number");
    else
        printf("Denghe");
}