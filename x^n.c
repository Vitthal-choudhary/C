#include<stdio.h>

main()
{
    int X,n,result=1;
    printf("Enter X and n ");
    scanf("%d%d",&X,&n);

    /*for (int i = 1; i <= n; i++)
    {
        result *= X;
    }
    */
    /*
    int j=1;
    while (j<=n)
    {
        result *= X;
        j++;
    }
    */
    int k=1;
    do
    {
        result*=X;
        k++;
    } while (k<=n);
    
    printf("result = %d",result);
}