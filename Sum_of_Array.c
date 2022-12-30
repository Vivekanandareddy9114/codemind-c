#include<stdio.h>
int main()
{
    int n,i,A[n],SUM=0;
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
        scanf("%d",&A[i]);
        SUM=SUM+A[i];   
    }
    printf("%d",SUM);
}