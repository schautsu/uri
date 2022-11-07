/*1221: PRIMO RAPIDO - schautsu*/
#include <stdio.h>

/*function prototype*/
int isPrime(int);

int main()
{
    int n, x;

    scanf("%d", &n);
  
    while (n--)
    {
        scanf("%d", &x);

        if (isPrime(x))
            printf("Prime\n");
        else    
            printf("Not Prime\n");
    }
    return (0);
}

int isPrime(int x)
{
    int i;
  
    for (i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return (0);
    }
    return (1);
}
