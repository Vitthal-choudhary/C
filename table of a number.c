#include <stdio.h>

main()
{
    int n,table;
    printf("enter n");
    scanf("%d",&n);

    for (int i = 1; i <= 10; i++)
    {
        table = n*i;
        printf("%d\n",table);
    }

    int j=1;
    while (j<=10)
    {
        table = n*j;
        printf("%d\n",table);
        j++;
    }
    
    int k=1;
    do
    {
        table = n*k;
        printf("%d\n",table);
        k++;
    } while (k<=10);
    
}