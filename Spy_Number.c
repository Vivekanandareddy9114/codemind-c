#include<stdio.h>
int main()
{
    int n,num=1,sum=0;
    scanf("%d",&n);
    while(n!=0)
    {
        num=num*(n%10);
        sum=sum+n%10;
        n=n/10;
    }
    if(sum==num)
    printf("Spy Number");
    else
    printf("Not Spy Number");
}
    