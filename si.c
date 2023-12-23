/*Simple interest*/
#include<stdio.h>

main()
{
    
    long P;int T;float R,SI;
    printf("Enter P,R,T\n");
    scanf("%ld%f%d",&P,&R,&T);
    SI = (P*R*T)/100.0;
    printf("Simple interest is %f",SI);
}