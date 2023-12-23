#include <stdio.h>

main()
{
    int a[10] = {5,6,4,8,23,51,420}, pos,item,i;

    // insertion in array
    printf("Enter item and position ");
    scanf("%d%d", &item, &pos);

    for (i = 8; i >= pos; i--)
        a[i+1] = a[i];
    
    a[pos] = item;

    printf("\nAfter addition\n");
    for (int j = 0; j <= 10; j++)
        printf("%d\n", a[j]);

    // Deletion in array
    printf("\nEnter position ");
    scanf("%d", &pos);

    for (i = pos; i <= 8; i++)
        a[i] = a[i+1];
    printf("\nArray after deletion \n");
    for (int j = 0; j <= 10; j++)
        printf("%d\n", a[j]);
    

}