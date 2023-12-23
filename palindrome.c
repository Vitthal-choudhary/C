#include <stdio.h>

main()
{
    int n,m,new=0,rem;
    printf("enter n "); scanf("%d", &n);
    m=n;
    while (n>0)
    {
        rem = n%10;
        new = new *10 +rem;
        n /= 10;
    }
    if (m==new)
        printf("palindrome");

}