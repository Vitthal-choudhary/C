/*Read age and salary check if promoted*/
#include<stdio.h>

main()
{
    int age;long salary;
    printf("Enter age:  ");
    scanf("%d", &age);
    printf("enter Salary:  ");
    scanf("%ld", &salary);

    /*if (age>40)
        if (salary>40000)
            printf("Promoted");
        else
            printf("Not Promoted");
    else
        if (salary>50000)
            printf("promoted");
        else
            printf("not promoted");
    */
    // Alternate way
    if ((age > 40 && salary > 40000) || salary > 50000)
        printf("Promoted");
    else
        printf("Not promoted");
}