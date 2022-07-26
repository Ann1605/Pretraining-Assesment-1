//2. generate fib and find sum of even num

#include <stdio.h>

long int generateFib()
{
    long int sum = 0,a=0,b=1,c=0;
    for(long int i = 2;c<4000000;i++)
    {
        c = a+b;
        if(c%2==0)
        {
            sum+=c;
        }
        a = b;
        b = c;
    }
    return sum;
}

int main()
{
    long int a = 4700000;
    printf("%ld",generateFib());
    
    return 0;
}