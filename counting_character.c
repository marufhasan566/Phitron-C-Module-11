#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    scanf("%s", str);
    int count[26] = {0};
    for (int i = 0; i < strlen(str); i++)
    {
        // printf("%c\n", str[i]);
        int value = str[i] - 'a';
        // printf("%d\n", value);
        count[value]++;
    }
    for (int i = 0; i < 26; i++)
    {
        int character = i + 'a';
        // printf("%c - %d\n", character, count[i]);
        if (count[i] != 0)
        {
            printf("%c - %d\n", character, count[i]);
        }
    }

    return 0;
}