// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char a[100], b[100];
//     scanf("%s %s", a, b);
//     int result = strcmp(a, b);
//     // printf("%d", result);
//     if (result == 0)
//     {
//         printf("A & B both are same");
//     }
//     else if (result > 0)
//     {
//         printf("B is smaller");
//     }
//     else if (result < 0)
//     {
//         printf("A is smaller");
//     }
//     return 0;
// }

int count(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return 1 + count(n / 10);
    }
}