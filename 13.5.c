#include<stdio.h>
int sumofdN(int);
int sumofdN(int n)
{
    if(n==0)
        return 0;
    return n%10 + sumofdN(n/10);
}

int main()
{
    int a;
    printf("Enter the number upto find sum=");
    scanf("%d",&a);
    printf("%d",sumofdN(a));
    return 0;
}
