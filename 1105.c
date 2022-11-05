/*1105: SUB-PRIME - schautsu*/
#include <stdio.h>

int main()
{
    int b, n; //b: banks | n: debentures
    int i, debtor, creditor, deb, sn;
    
    while (scanf("%d %d", &b, &n) && (b && n))
    {
        int money_res[b];
        sn = 0;

        for(i = 0; i < b; i++)
            scanf("%d", &money_res[i]);
        
        while (n--)
        {
            scanf("%d %d %d", &debtor, &creditor, &deb);

            money_res[debtor-1] -= deb;
            money_res[creditor-1] += deb;
        }
        for ( i = 0; i < b; i++)
        {
            if (money_res[i] < 0) {
                sn++; break;
            }
        }
        if(sn) printf("N\n");
        else printf("S\n");
    }
    return (0);
}
