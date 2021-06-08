#include<stdio.h>
main()
{
    int fact=1,n,i=1;
    printf("Enter The Number is:\n");
    scanf("%d",&n);
    do
    {
        fact=fact*i;
        i++;
    }while(i<=n);
    
    printf("\tAnswer of this Factorial %d is %d\t\t",n,fact);
    
    printf("This code is completed");
    
}
