#include <stdio.h>
#include <string.h>

int main()
{
    char s[100001];
    scanf("%s", &s);

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'a' && s[i] != ',')
        {
            printf("%c", s[i] - 32);
        }
        else if (s[i] < 'a' && s[i] != ',')
        {
            printf("%c", s[i] + 32);
        }
        else
        {
            printf("%c", 32);
        }
    }

    return 0;
};