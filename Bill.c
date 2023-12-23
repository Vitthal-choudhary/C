# include <stdio.h>

main()
{
    int nou; float rate,bill,netbill;
    printf("enter number of units");
    scanf("%d",&nou);

    if (nou>1000)
        rate=10;
    else
        if (nou>700)
            rate=7;
        else
            if (nou>400)
                rate = 4;
            else
                rate = 2.5;
    
    bill = nou*rate;
    if (bill>7000)
        netbill = bill+bill*0.02;
    else
        netbill = bill;
    
    printf("%f", netbill);
}