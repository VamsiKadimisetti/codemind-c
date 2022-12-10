#include<stdio.h>
int main()
{ 
    int a; 
    float b,c,d,e; 
    scanf("%d",&a); 
    b=(a*(1.20))+100; 
    c=(a*(1.50))+100; 
    d=(a*(1.80))+((a*(1.80))*(0.15))+100; 
    e=(a*(2.00))+((a*(2.00))*(0.15)); 
    if(a<200) 
    { 
        printf("%.2f",b);
    }
    else if(a<400&&a>=200) 
    { 
        printf("%.2f",c); 
    }
    else if(a<600&&a>=400) 
    { 
        printf("%.2f",d); 
    } 
    else if(a>600)
    { 
        printf("%.2f",e); 
    }
}