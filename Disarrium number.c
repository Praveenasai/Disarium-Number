#include<stdio.h>
#include<math.h>
int main()
{
    int s,e;
    scanf("%d %d",&s,&e);
    for(int i=s;i<=e;i++)
    {
        int n=i;
        int c=0,sum=0,rem;
        while(n>0)
        {
            c++;
            n/=10;
        }
        int t=i;
        while(t>0)
        {
            rem=t%10;
            sum=sum+pow(rem,c);
            c--;
            t/=10;
        }
    
        int t1=i;
        if(sum == t1)
        {
            printf("%d\n",sum);
        }
        
        
    }
}