#include <stdio.h>
#include <string.h>
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    char str[m];
    char str2[n];
    scanf("%s %s", str, str2);
    strcpy(str, str2); // str2 will be copied go str using built in function strcpy()
    printf("%s %s", str, str2);

    return 0;
}