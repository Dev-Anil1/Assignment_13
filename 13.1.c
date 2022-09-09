#include<stdio.h>
int sumN(int);
int sumN(int n)
{
    if(n==1)
        return 1;
    return n+sumN(n-1);
}

int main()
{
    int a,b;
    printf("Enter the number upto find sum=");
    scanf("%d",&a);
    b=sumN(a);
    printf("%d",b);
    return 0;
}
