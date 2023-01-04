#include<stdio.h>
#include<math.h>
int sum_sq(int n)
{
    scanf("%d",&n);
    int i,ss=0;
    for(i=1;i<=n;i++)ss += i*i;
    return ss;
    }
    int sq_sum(int n)
    {
        scanf("%d",&n);
        int j,sqs,sq=0;
        for(j=1;j<=n;j++) sq+=j;
        sqs=sq*sq;
        return sqs;
        }
        int main()
        {
            int n;
            scanf("%d",&n);
            int k,l,diff;
            k=sum_sq(n);
            l=sq_sum(n);
            diff=abs(k-l);
            printf("%d",diff);
}