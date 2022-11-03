/*1087: DAMA - schautsu*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Xo, Yo, X, Y, moves; // X, Y: aimed position 

    while (scanf("%d %d %d %d", &Xo, &Yo, &X, &Y) && (Xo && Yo && X && Y))
    {
        if (X == Xo && Y == Yo) 
            moves = 0; //e.g. [6][4] and [6][4]
        else if ((abs(X - Xo) == abs(Y - Yo)) || (X == Xo || Y == Yo)) 
            moves = 1; //e.g. ([6][4] and [4][6]) or ([6][4] and [5][4])
        else 
            moves = 2; //e.g. [6][4] and [4][5]

        printf("%d\n", moves);
    }
    return (0);
}
