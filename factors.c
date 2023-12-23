#include<stdio.h>

int main()
{
    int n,sum=0;printf("enter a number "); scanf("%d",&n);
    for (int i = 1; i <= n/2; i++)
    {
        if (n%i==0)
            {
                printf("%d\n",i);
                sum += i;
            }
    }
    printf("%d",n);    
    sum+=n;
    printf("\nSum of all the factors is %d",sum);
    return 0;
}
