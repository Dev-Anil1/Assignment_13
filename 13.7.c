#include<stdio.h>
int Hcf(int,int);
int Hcf(int a,int b)
{
    if(b==0)
        return a;
    Hcf(b,a%b);
}

int mai()
{
    int x,y;
    printf("Enter two numbers ");
    scanf("%d %d",&x,&y);
    int result=x>y?x:y;
    result=Hcf(y,x%y);
    printf("HCf is %d",result);
    return 0;
}
