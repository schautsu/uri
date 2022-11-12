/*2518: ESCADA DO DINF - schautsu*/
#include <stdio.h>
#include <math.h>

int main()
{
    int n, h, c, l;
    double hypo, area;

    while (scanf("%d", &n) != EOF)
    {
        scanf("%d %d %d", &h, &c, &l);

        hypo = sqrt((pow(h,2) + pow(c,2)));
        area = round(hypo * l * n) / 10000;

        printf("%.4lf\n", area);
    }
    return (0);
}
