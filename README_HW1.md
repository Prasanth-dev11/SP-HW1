<!--
NOTES:
This README is an example README for CS332/532 HW#1.
-->

# Compilation Instructions
<!--Start of the code-->
#include<stdio.h>
#include<stdbool.h>
<!--Logic to check if a number is prime number or not-->
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
<!--Prime Number logic ends here-->
<!--Logic to check if a number is power of 2-->
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
<!--Power of 2 logic ends here-->
<!--Logic to find the nearest prime which is less than given number-->
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
<!--Nearest prime logic ends here-->
<!--Logic to calculate sum of digits-->
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
<!--Sum of digits logic ends here-->
<!--numberTramsformer function driver code-->
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
<!--End of numberTransformer function-->
<!--Main Function-->
int main()
{
    int inp;
    <!--It will ask you to enter a number-->
    printf("Enter a number");
    <!--To read input-->
    scanf("%d",&inp);
    numberTransformer(inp);
}
<!--End of the code-->


Compile the code and it will ask you to provide the input. Based on the input given, it will trigger the output.

# My Files
## numberTransformer.c

# Output screenshots
![Alt text](image.png)

References
/*https://www.geeksforgeeks.org/nearest-prime-less-given-number-n/*/








-----------------UABNUMBER-------------------------
<!--Start of the code-->
#include<stdio.h>
#include<stdbool.h>
<!--UABNumber Function driver code-->
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
<!--Main Function-->
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
<!--End of the code-->

Compile the code and it will ask you to provide an integer. 
Based on the input given, it will print True if the given integer is UABNumber else it will print False.





---------------------------reverseNum-----------------------------------
<!--Start of the code-->
#include<stdio.h>
<!--reverseNum function Logic-->
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
<!--reverseNum function ends here-->
<!--Main Function-->
int main()
{
    int n3;
    printf("Enter an integer\n");
    scanf("%d",&n3);
    printf("%d",reverseNum(n3));
}
<!--End of the code-->

Compile the code and it will ask you to enter an integer. 
This code will reverse the given integer and prints the reversed number.


---------------------------smallerThanIndex------------------------------
<!--Start of the code-->
#include<stdio.h>
<!--smallerThanIndex function logic-->
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
<!--function logic ends here-->
<!--Main Function-->
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
<!--End of the code-->

Compile the code and it will ask you to enter 5 integers. 
Based on the input given, it will count the number of integers in the array whose value is smaller than index and print the total as output.







----------------------------------arrayDetails------------------------------
<!--Start of the code-->
#include<stdio.h>
#include<math.h>
<!--arrayDetails Function Logic-->
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
<!--arrayDetails function logic ends here-->
<!--Main Function-->
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
<!--End of the code-->


Compile the code and it will ask you to enter 6 integers. 
Based on the input given, the code will print the minimum value, the minimum value’s index, the mean, the maximum value, and the maximum value’s index.