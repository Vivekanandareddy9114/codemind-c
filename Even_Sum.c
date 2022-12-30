#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int A[n],i;
    int sum=0;
    for(i=0;i<n;++i)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;++i)
    {
        if(A[i]%2==0)
        sum=sum+A[i];   
    }
    printf("%d",sum);
}