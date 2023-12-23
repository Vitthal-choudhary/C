#include<stdio.h>

main()
{
    int n,sum=0;printf("enter n ");scanf("%d",&n);
    for (int i = 1; i <= n; i++) 
    {
        sum += i;
    }
    printf("Sum= %d",sum);

    int j=1;
    while (j<=n)
    {
        sum+=j;
        j++;
    }
    printf("Sum= %d",sum);

    int k=1;
    do
    {
        sum+=k;
        k++;
    } while (k<=n);
    printf("Sum = %d",sum);
}