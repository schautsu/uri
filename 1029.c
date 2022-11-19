/*1029: FIBONACCI, QUANTAS CHAMADAS? - schautsu*/
#include <stdio.h>

/*function prototype*/
int fib(int, int *);

int main()
{
    int n, x, num_calls, result;

    scanf("%d", &n);

    while (n--)
    {
        scanf("%d", &x);

        num_calls = 0;
        result = fib(x, &num_calls);

        printf("fib(%d) = %d calls = %d\n", x, num_calls, result);
    }
    return (0);
}

int fib(int x, int *num_calls)
{
    if (x == 0) {
        return (0);
    } else if (x == 1) {
        return (1);
    } else {
        *num_calls += 2;
        return (fib(x-1, num_calls) + fib(x-2, num_calls));
    }
}
