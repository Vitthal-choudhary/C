/*
x^0/0! + x^1/1! + x^2/2! + ...... + x^n/n!
*/

#include<stdio.h>

main()
{
    int x,n,fact=1,pow=1;
    float sum = 1.0;    // 1.0 bcoz the first term can't be calculated by computer 
    
    printf("enter x and n ");
    scanf("%d%d",&x,&n);
    for (int i=1; i<=n; i++)
    {
        pow = pow*x;
        fact = fact*i;
        sum = sum + (float)pow/fact;
    }
    printf("%f",sum);
}