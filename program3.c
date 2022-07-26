//3. largest prime factor

#include <stdio.h>
#include <math.h>

int isPrime(long int n)
{
    for(long int i = 2;i<=n/2;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

long int generateFactors(long int n)
{
    long int prime = 2;
    for(long int i = 2;i<=sqrt(n);i++)
    {
        if(n%i==0 && isPrime(i)==1)
        {
            prime = (prime > i)?prime:i;
        }
    }
    return prime;
}

int main()
{
    long int a = 600851475143;
    printf("%ld",generateFactors(a));
    
    return 0;
}