#include<stdio.h>
int reverseNum(int n3)
{
    int a,rev=0;
    while(n3>0)
    {
        a=n3%10;
        rev=rev*10+a;
        n3=n3/10;
    }
    return rev;
}
int main()
{
    int n3;
    printf("Enter an integer\n");
    scanf("%d",&n3);
    printf("%d",reverseNum(n3));
}
