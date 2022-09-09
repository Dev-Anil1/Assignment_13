#include<stdio.h>
int sumoddN(int);
int sumoddN(int n)
{
    if(n==1)
        return 1;
    return 2*n-1 + sumoddN(n-1);
}

int main()
{
    int a;
    printf("Enter the number upto find sum=");
    scanf("%d",&a);
    printf("%d",sumoddN(a));
    return 0;
}
