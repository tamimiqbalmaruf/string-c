#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int m;
    scanf("%d", &m);
    int b[m];

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    int c[n+m];

    for (int i = 0; i < n + m; i++)
    {
        if(i < n){
            c[i] = a[i];
        }else{
            c[i] = b[i-n];
        }
    }


    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
};