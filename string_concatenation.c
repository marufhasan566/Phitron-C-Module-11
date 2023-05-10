#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], str2[100];
    scanf("%s %s", str, str2);
    char str3[100 + 100 + 1];
    for (int i = 0; i < strlen(str); i++)
    {
        str3[i] = str[i];
    }
    // printf("%s", str3);
    int n = 0;
    for (int i = strlen(str) - 1; i < strlen(str) + strlen(str2); i++)
    {
        str3[i] = str2[n];
        n++;
    }
    printf("%s", str3);

    return 0;
}