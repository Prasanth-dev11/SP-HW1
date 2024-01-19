#include<stdio.h>
#include<math.h>
void arrayDetails(int inp_arr[])
{
    int min=inp_arr[0],max=inp_arr[0];
    int min_i=0,max_i=0,sum=inp_arr[0];
    for(int i=1;i<6;i++)
    {
        sum+=inp_arr[i];
        if(inp_arr[i]<min)
        {
            min=inp_arr[i];
            min_i=i;
        }
    }
    double mean=sum/(float)6;
    for(int i=1;i<6;i++)
    {
        if(inp_arr[i]>max)
        {
            max=inp_arr[i];
            max_i=i;
        }
    }
    printf("[%d,%d,%.2f,%d,%d]",min,min_i,mean,max,max_i);
}
int main()
{
    int inp[6]={};
    printf("Enter 6 integers\n");
    for(int i=0;i<6;i++)
    {
        scanf("%d",&inp[i]);
    }
    arrayDetails(inp);
}
