#include<stdio.h>
#include<stdbool.h>
int checkPrimee(int n)
{
    int res=0;
    if(n==0||n==1)
    {
        res=1;
    }
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            res=1;
            break;
        }
    }
    return res;
}
bool powerOfTwo(int n)
{
    if (n == 0)
        return 0;
    while (n != 1) {
        if (n % 2 != 0)
            return 0;
        n = n / 2;
    }
    return 1;
}
int nearestPrime(int n)
{
    if (n & 1)
        n -= 2;
    else
        n--;

    int i, j;
    for (i = n; i >= 2; i -= 2) {
        if (i % 2 == 0)
            continue;
        for (j = 3; j <= sqrt(i); j += 2) {
            if (i % j == 0)
                break;
        }
        if (j > sqrt(i))
            return i;
    }
    return 2;
}
int sumOfDigits(int n)
{
    int sumofdigits=0,m;
    int a=n;
    while(a>0)
    {
        m=a%10;
        sumofdigits=sumofdigits+m;
        a=a/10;
    }
    return sumofdigits;
}
void numberTransformer(int n)
{
    char str[1000];
    if(n%3==0 && n%5==0)
    {
        printf("UAB CS 332&532");
        return;
    }
    if(n!=3)
    {
        if(n!=5)
        {
            if(checkPrimee(n)!=1)
            {
                printf("Go Blazers");
                return;
            }
        }
    }
    if(powerOfTwo(n)==true)
    {
        int p=nearestPrime(n);
        int r=p+n;
        sprintf(str,"%d",r);
        printf("%s",str);
        return;
    }
    int sum=sumOfDigits(n);
    if(sum%3==0 && sum>=3)
    {
        printf("CS");
        return;
    }
    else
    {
        char str1[1000];
        int sum1=sumOfDigits(n);
        int k=sum1*sum1;
        sprintf(str1,"%d",k);
        printf("%s",str1);
    }
}
int main()
{
    int inp;
    printf("Enter a number");
    scanf("%d",&inp);
    numberTransformer(inp);
}


/*https://www.geeksforgeeks.org/nearest-prime-less-given-number-n/*/
