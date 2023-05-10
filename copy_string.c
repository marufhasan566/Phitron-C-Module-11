#include <stdio.h>
#include <string.h>
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    char str[m];
    char str2[n];
    scanf("%s %s", str, str2);
    printf("%s %s\n", str, str2);
    str[n+1];
    for (int i = 0; i <= n; i++)
    {
        str[i] = str2[i];
    }
    printf("%s %s", str, str2);

    return 0;
}