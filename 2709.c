/*2709: AS MOEDAS DE ROBBIE - schautsu*/
#include <stdio.h>

/*function prototype*/
int isPrime(int);

int main()
{
    int sum, M, N, i;

    while (scanf("%d", &M) != EOF)
    {
        int V[M];

        for (i = 0; i < M; i++) {
            scanf("%d", &V[i]);
        }
        scanf("%d", &N);

        sum = 0;

        for (i = M-1; i >= 0; i-= N) {
            sum += V[i];
        }

        if (isPrime(sum))
            printf("You’re a coastal aircraft, Robbie, a large silver aircraft.\n");
        else
            printf("Bad boy! I’ll hit you.\n");
    }
    return 0;
}

int isPrime(int num)
{
    int i;

    if ((num != 2 && num % 2 == 0) || (num == 1)) 
		return (0);

    for (i = 3; i * i <= num; i += 2) {
        if (num % i == 0)
            return (0);
    }
    return (1);
}
