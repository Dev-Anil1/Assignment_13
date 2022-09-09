#include<stdio.h>
int sumsquareN(int);
int sumsquareN(int n)
{
    if(n==1)
        return 1;
    return n*n + sumsquareN(n-1);
}

int main()
{
    int a;
    printf("Enter the number upto find sum=");
    scanf("%d",&a);
    printf("%d",sumsquareN(a));
    return 0;
}

