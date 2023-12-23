/* Read salary rom user and find tax on it thus find net salary. display tax and net salary*/
#include <stdio.h>

main()
{
    double salary, netsalary;float tax,rate; 
    printf("Enter Salary :: \n");
    scanf("%lf", &salary);

    if (salary>1000000)
        rate = 0.35;
    else
        if (salary>500000)
            rate = 0.2;
        else
            if (salary>300000)
                rate = 0.1;
            else
                rate = 0;
    
    tax = salary*rate;
    netsalary = salary-tax;
    printf("Tax = %f", tax);
    printf("Net Salary = %lf", netsalary);
}