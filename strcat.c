#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], str2[100];
    scanf("%s %s", str, str2);
    strcat(str, str2);
    printf("%s", str);

    return 0;
}