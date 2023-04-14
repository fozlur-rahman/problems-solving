#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int x, index = -1;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (x == arr[i])
        {
            index = i;
            break;
        }
    }
    printf("%d", index);
    return 0;
}