#include <stdio.h>

main()
{
    int a[10] = {1,2,3,4,5,6,8,56,95,4251},first = 0,last = 9,mid,term;
    
    printf("enter item  ");
    scanf("%d", &term);
    do
    {
        mid = (first + last) / 2;
        if (a[mid] == term)
            break;
        else
            if(a[mid]>term)
                last = mid-1;
            else
                first = mid + 1;
    } while (first <= last);
    
    if (first > last)
        printf("Not Found");
    else
        printf("Found at %d", mid);
}