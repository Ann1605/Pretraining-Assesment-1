//4. Largest palindrome form by 2 3 digit numbers


#include <stdio.h>

int isPalindrome(int n)
{
    int temp = n;
    int res = 0;
    while(temp>0)
    {
        res = res*10 + temp%10;
        temp/=10;
    }
    if(n==res)
        return 1;
    return 0;
}

int main()
{
    int num = 0;
    int temp = 0;
    for(int i=999;i>=100;i--)
    {
        for(int j=i;j>=100;j--)
        {
            if(isPalindrome(i*j)==1)
            {
                num = (num < (i*j))?(i*j):num;
                break;
            }
        }
    }
    printf("%d",num);
    return 0;
}