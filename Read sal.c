/* Read Salary if Sal > 1000000 ---> manager else --> clerk*/

#include<stdio.h>

main()
{
    long sal;
    printf("Enter Salary :\n");
    scanf("%ld", &sal);

    if (sal > 1000000)
        printf("Manager");
    else
        printf("Clerk");
}