// 1. Multiples of 3 or 5



#include <stdio.h>

long int sumOfMultiples(int n)
{
    int i;
    long int sum = 0;
    for(i=1;i<n;i++)
    {
        if(i%3==0 || i%5==0)
        {
            sum+=i;
        }
    }
    return sum;
}

int main()
{
    
    printf("%ld",sumOfMultiples(1000));
    
    return 0;
}