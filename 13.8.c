#include<stdio.h>
int fibo(int);
int fibo(int a)
{
    if(a==0 || a==1)
        return a;
    return fibo(a-2)+fibo(a-1);
}

int main()
{
    int n,i;
    printf("Enter value");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("%d ",fibo(i));
    }
    return 0;
}
