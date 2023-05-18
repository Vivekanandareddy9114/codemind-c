#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    int temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(A[i]>=A[j])
            {
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
}
