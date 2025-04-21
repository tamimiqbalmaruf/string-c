#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    scanf("%s", s);

    // int count = 0;

    // while (s[count] != '\0')
    // {
    //     count++;
    // };

   int size = strlen(s);

    printf("%d", size);

    return 0;
};