#include<stdio.h>
int main()
{ 
    int a,b,c,d,e; 
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e); 
    float p; p=(a+b+c+d+e)/5.0; 
    if(p>=90) 
    { 
        printf("Grade A"); 
    }
    else if(p>=80) 
    { 
        printf("Grade B"); 
    } 
    else if(p>=70) 
    { 
        printf("Grade C"); 
    } 
    else if(p>=60) 
    { 
        printf("Grade D"); 
    } 
    else if(p>=40) 
    { 
        printf("Grade E"); 
    }
    else 
    { 
        printf("Grade F"); 
    }
}