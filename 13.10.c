#include<stdio.h>
#include<math.h>
int power(int,int);
int power(int x,int y)
{
    if(x==0)
        return 0;
    if(x==1 && y==0)
        return 1;
    pow(x,y);
}

int main()
{
    int a,b;
    printf("Enter the values ");
    scanf("% %d",&a,&b);
    printf("Power is %d",power(a,b));
    return 0;
}
