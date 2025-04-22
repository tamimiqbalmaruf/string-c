#include <stdio.h>
#include <string.h>

int main()
{
    char a[11];
    char b[11];

    scanf("%s %s", a, b);
    printf("%d %d\n", strlen(a), strlen(b));

    int totalLength = strlen(a) + strlen(b);

    char c[totalLength + 1];

    for (int i = 0; i < totalLength; i++)
    {
        if (i < strlen(a))
        {
            c[i] = a[i];
        }
        else
        {
            c[i] = b[i - strlen(a)];
        }

        printf("%c", c[i]);
    };

    printf("\n");

    printf("%c", b[0]);

    for (int i = 1; i < strlen(a); i++)
    {
        printf("%c", a[i]);
    }

    printf(" ");

    printf("%c", a[0]);

    for (int i = 1; i < strlen(b); i++)
    {
        printf("%c", b[i]);
    }

    return 0;
};