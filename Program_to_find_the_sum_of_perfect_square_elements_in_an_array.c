#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,j,flag=0,psq=0;
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        for(j=1;j<=n;j++)
        if(j*j==arr[i])
        psq+=arr[i];
    }
    printf("%d",psq);
}