#include<stdio.h>
void main()
{
    int n,count=0;
    printf("ENTER ANY NUMBER");
    scanf("%d",&n);
    while(n>0)
    {
        n/=10;
        count++;
    
    }
    printf("THE NUMBER OF DIGITS ARE:%d",count);
}

