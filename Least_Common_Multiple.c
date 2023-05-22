#include<stdio.h>
int main()
{
    int a,b,lcm,i=1;
    scanf("%d%d",&a,&b);
    lcm=(a>b)? a:b;
    while(i)
    {
        if(((lcm*i)%a==0)&&((lcm*i)%b==0))
        {
        printf("%d",lcm*i);
        break;
        }
        i++;
    }
    
}