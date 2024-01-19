#include<stdio.h>
#include<stdbool.h>
bool UABNumber()
{
    int n2,i,sum=0;
    printf("Enter an integer\n");
    scanf("%d",&n2);
    for(i=1;i<n2;i++)
    {
        if(n2%i==0)
        {
            sum+=i;
        }
    }
    if(n2==sum)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    bool res;
    res=UABNumber();
    if(res==true)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
