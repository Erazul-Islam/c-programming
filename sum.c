#include<stdio.h>
int main()
{
    int a,b,c,sum;
    printf("Please input three integers:");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    printf("The sum of three integers is:%d",sum);
    return 0;
}