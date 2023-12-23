#include <stdio.h>

main()
{
    int biggest,smallest,sum=0, a[10] = {1,2,5,4,6,9,8,85,46};
    //reverse print an array
    for (int i = 10; i >= 1; i--)
        printf("%d\n",a[i]);   

    // sum of all elements in array
    for (int i = 0; i <= 9; i++)
        sum += a[i];
    printf("%d",sum);

    // smallest,biggest
    biggest = a[0]; smallest = a[0];

    for (int i = 0; i <= 9; i++)
    {
        if (a[i] > biggest)
            biggest = a[i];
        if (a[i] < smallest)
            smallest = a[i];        
    }
    printf("Biggest = %d\nSmallest = %d",biggest,smallest);    
}