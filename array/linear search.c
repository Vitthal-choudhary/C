#include<stdio.h>

main()
{
    int a[10] = {1,2,5,3,6,4,8,9,10,25}, item, i;
    printf("enter item");
    scanf("%d",&item);

    for (i = 0; i <= 9; i++)
    {
        if (a[i] == item)
            break;
    }
    if (i<10)
        printf("Found at %d position", i);
    else
        printf("Not found");


    // for multiple occurences ----->>
    int a[10] = {1,2,5,3,6,4,8,9,10,25}, item, i, flag=0;
    printf("enter item");
    scanf("%d",&item);

    for (i = 0; i <= 9; i++)
    {
        if (a[i] == item)
        {
            printf("Found at %d position", i);
            flag = 1;
        }
    }
    if (flag == 0)
        printf("Not found");      

}