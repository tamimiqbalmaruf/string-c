#include <stdio.h>
#include <string.h>
#include <stdbool.h>;

int main()
{
    char s[1001];
    scanf("%s", &s);

    int length = strlen(s);

    char t[length + 1];

    for (int i = 0; i < length; i++)
    {
        t[i] = s[(length - 1) - i];
    }

    bool isPalindrome = true;

    for (int i = 0; i < length; i++)
    {
        if (s[i] != t[i])
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
};


// #include <stdio.h>
// #include <string.h>

// int main() {
//     char s[1001];
//     scanf("%s", s);

//     int len = strlen(s);
//     int isPalindrome = 1;

//     for (int i = 0; i < len / 2; i++) {
//         if (s[i] != s[len - i - 1]) {
//             isPalindrome = 0;
//             break;
//         }
//     }

//     if (isPalindrome) {
//         printf("YES\n");
//     } else {
//         printf("NO\n");
//     }

//     return 0;
// }
