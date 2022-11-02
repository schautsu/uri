/*1169: TRIGO NO TABULEIRO - schautsu*/
#include <stdio.h>
#include <math.h>
#include <inttypes.h>

int main()
{
    uint64_t kg;
    int n, sq;

    scanf("%d", &n);
    while(n){
        scanf("%d", &sq);

        kg = (pow(2,sq) - 1) / 12000; 
        /*(pow(2,sq) - 1): grams
        12000 grams: 1 kg*/
        printf("%"PRIu64" kg\n", kg);
        
        n--;
    }
    
}
