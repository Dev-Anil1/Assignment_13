#include<stdio.h>
int count(int,int);
//int cnt=0;
int count(int n,int cnt)
{
    if(n==0)
        return 0;
    cnt++;
    return count(n/10,cnt);
}

int main()
{
    int a,cnt=0;
    printf("Enter number");
    scanf("%d",&a);
    count(a,cnt);
    printf("%d",cnt);
    return 0;
}
