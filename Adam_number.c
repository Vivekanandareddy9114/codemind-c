#include<stdio.h>
int main()
{
    int n,num,sum=0,sq1,sq2,rsq2,q;
    scanf("%d",&n);
    sq1=n*n;
    q=n;
    while(q!=0)
    {
        num=q%10;
        sum=sum*10+num;
        q=q/10;
    }
    sq2=sum*sum;
    q=sq2;
    sum=0;
    while(q!=0)
    {
        num=q%10;
        sum=sum*10+num;
        q=q/10;
    }
    rsq2=sum;
    if(rsq2==sq1)
    printf("True");
    else
    printf("False");
}