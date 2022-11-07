/*1161: SOMA DE FATORIAIS - schautsu*/
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

/*function prototype*/
int64_t fatorial(int x);

int main()
{
    int64_t sum;
    int m, n;

    while (scanf("%d %d", &m, &n) != EOF)
    {
        sum = fatorial(m) + fatorial(n);

        printf("%" SCNd64, sum);
        printf("\n");
    }
    return (0);
}

int64_t fatorial(int x)
{
    int64_t fat = 1;
    int i;

    if (x >= 0) {
        for (i = 2; i <= x; i++) {
            fat *= i;
        }
        return (fat);
    }
    return (0);
}
