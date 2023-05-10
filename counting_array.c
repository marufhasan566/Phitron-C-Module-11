#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count[10] = {0};
    // int count[101] = {0};
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d - %d\n", i, count[i]);
    }
    // printf("%d - %d\n", 100, count[100]);

    return 0;
}