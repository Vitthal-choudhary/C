# include <stdio.h>

main()
{
    int x;
    printf("enter a number between 1 to 7:---->  ");
    scanf("%d",&x);
    switch (x)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Teusday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("Invalid Choice !!!!");
    }

    // months
    int y;printf("\nEnter  a number from 1 to 12---> ");
    scanf("%d", &y);
    switch (y)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31 Days in this month");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("30 Days in this month");
        break;
    case 2:
        printf("28 or 29 DAys in this month");
        break;    
    default:
        printf("Invalid choice");
    }
}