#include<stdio.h>
int main()
{
    int n,i,j,q;
    scanf("%d",&n);
    int A[n],c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0,q=n;j<q;j++)
        {
            if(i!=j)
            {
                if(A[i]==A[j])
                {
                    c++;
                }
            }
        }
        if(c==0)
        {
        printf("%d",A[i]);
        }
    }
}
