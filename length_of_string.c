#include <stdio.h>

int main()
{
    char s[101];
    scanf("%s", s);

    int count = 0;

    while (s[count] != '\0')
    {
        count++;
    };

    printf("%d", count);

    return 0;
};