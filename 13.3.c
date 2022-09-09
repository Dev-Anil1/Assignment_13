#include<stdio.h>
int sumevenN(int);
int sumevenN(int n)
{
    if(n==0)
        return 0;
    return 2*n + sumevenN(n-1);
}

int main()
{
    int a;
    printf("Enter the number upto find sum=");
    scanf("%d",&a);
    printf("%d",sumevenN(a));
    return 0;
}

