#include <stdio.h>

main()
{
    /*
    //tables from 2 to 20
    int t=1;

    for (int i = 2; i <= 20; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            t = i*j;
            printf("%d * %d = %d ", i,j,t);
        }
        printf("\n\n");
    }   
    */
    // armstrong numbers from 1-500
    int n,m,rem,sum;

    for (n = 1; n <=500; n++)
    {
        sum = 0;
        m=n;
        while (m>0)
        {
            rem = m%10;
            sum = sum + rem*rem*rem;
            m/=10;
        }
        if (sum == n)
            printf("Armstrong number = %d\n",n);
    }
    /*
    // Palindromes between 1 to A
    int a,new,rem;
    printf("enter a "); 
    scanf("%d",&a);

    for (int i = 1; i <= a; i++)
    {
        new = 0;
        int j=i;
        while (j>0)
        {   
            rem = j%10;
            new = new *10 +rem;
            j /= 10;
        }
        if (i==new)
            printf("%d\n", i);
    }
    */
   /*
    //prime no. between a to b;
    int a,b,factors;
    printf("Enter a and b");
    scanf("%d%d", &a,&b);

    for (a; a <= b; a++)
    {        
        for (int i = 1; i <= a/2; i++)
        {
            if (a%i==0)
                factors++;
        }
        if (factors==1)
            printf("%d", a);
    }  
    */
}