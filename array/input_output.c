#include <stdio.h>

main()
{
    int a[10];
    for (int i = 0; i <= 9; i++)
    {
        printf("Enter element");
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 10; i++)
        printf("%d\n",a[i]);      
    
}