#include<stdio.h>

main()
{
    int number,fact=1;
    printf("enter the number-->  ");
    scanf("%d",&number);

    /*for (int i = number; i >= 1; i--)
    {
        fact = fact*i;
    }
    */
    /*
    int j=1;
    while (j<=number)
    {
        fact*=j;
        j++;
    }
    */
    int k=1;
    do
    {
        fact*=k;
        k++;
    } while (k<=number);
    
    
    printf("Factorial = %d",fact);
}
