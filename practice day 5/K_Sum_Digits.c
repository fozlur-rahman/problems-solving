#include <stdio.h>
int main()
{
    int n;
    scanf("%d ", &n);
    // printf("%d", n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &a[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {

        int fd = a[i] % 1000;
        int sd = a[i] % 1000;

        printf("%d %d", fd, sd);
    }
    // printf("%d ", sum);
}