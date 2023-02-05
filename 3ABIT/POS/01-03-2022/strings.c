#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int MAXLEN = 100;

int stringlen(char string[]);

int main()
{
    char str[MAXLEN + 1];
    int len;
    printf("\nWort eingeben: ");
    scanf("%s", str);
    len = stringlen(str);
    printf("Das Wort hat %d Buchstaben\n", len);
    return 0;
}
int stringlen(char string[])
{
    int i = 0;
    while (string[i] != 0)
    {
        i++;
    }
    return i;
}
