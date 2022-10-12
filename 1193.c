/*1193: BASE CONVERSION - schautsu*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*function prototypes*/
void todec(char*, char*);
void tohex(char*, char*);
void tobin(char*, char*);

int main()
{
    char n[33], format[4];
    int t, i = 1;

    scanf("%d", &t);
    while(i<=t){
        scanf("%s %s", n, format);
        printf("Case %d:\n", i);

        if(!strcmp(format, "dec")){ tohex(n, format); tobin(n, format); }
        else if(!strcmp(format, "hex")){ todec(n, format); tobin(n, format); }
        else { todec(n, format); tohex(n, format); }

        printf("\n");
        i++;
    }
}

void todec(char num[], char format[]) /*convert number to decimal format*/
{
    unsigned long int number;

    if(!strcmp(format, "hex"))
        number = strtoul(num, 0, 16);
    else
        number = strtoul(num, 0, 2);
    
    printf("%lu dec\n", number);
    
}
void tohex(char num[], char format[]) /*convert number to hexadecimal format*/
{
    unsigned long int number;

    if(!strcmp(format, "dec"))
        number = strtoul(num, 0, 10);
    else
        number = strtoul(num, 0, 2);
    
    printf("%lx hex\n", number);

}
void tobin(char num[], char format[]) /*convert number to binary format*/
{
    unsigned long int number;
    char *bin = malloc(sizeof(char)*33); 
    int i, j = 0;

    if(!strcmp(format, "dec"))
        number = strtoul(num, 0, 10);
    else
        number = strtoul(num, 0, 16);
    
    while(number){
        bin[j++] = 48 + (number % 2);
        number /= 2;
    }
    for(i=j-1;i>=0;i--) printf("%c", bin[i]);
    printf(" bin\n");

    free(bin);
}
