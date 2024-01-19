#include<stdio.h>
int smallerThanIndex(int inp_arr[])
{
    int count=0;
    for(int i=0;i<5;i++)
    {
        if(inp_arr[i]<i)
        {
            count+=1;
        }
    }
    return count;
}
int main()
{
    int inp[5]={};
    printf("Enter 5 integers\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&inp[i]);
    }
    int res=smallerThanIndex(inp);
    printf("%d",res);
}
