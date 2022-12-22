#include<stdio.h>
int main()
{ 
    int n,cnt,i,j,r,c=0; 
    scanf("%d",&n); 
    for(j=1;j<=n;j++) 
    { 
        cnt=0; 
        for(i=1;i<=j;i++) 
        { 
            r=j%i; 
            if(r==0) 
            { 
                cnt=cnt+1; 
            } 
        } 
        if(cnt==9) 
        { 
            printf("%d ",j); 
            c=c+1; 
        } 
    } 
    printf("
"); 
    printf("Total=%d",c);
}