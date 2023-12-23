#include <stdio.h>

main()
{
    int x=0,y=1,z,nth_value,count;

    /*
    //prints till nth value
    printf("enter nth value ");
    scanf("%d",&nth_value);

    printf("%d %d ",x,y);
    do
    {
        z = x+y;
        printf("%d ",z);
        x=y;
        y=z;
    } while (x+y <= nth_value);
    */

    // print n terms
    printf("enter terms");
    scanf("%d",&nth_value);
    printf("%d %d ",x,y);
    count = 2;
    do
    {
        z = x+y;
        printf("%d ",z);
        count++;
        x=y;
        y=z;
    } while (count < nth_value);
    
}