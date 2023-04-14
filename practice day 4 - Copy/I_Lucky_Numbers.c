#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ld = n % 10;
    int fd = n / 10;
    if (ld % fd == 0 || fd % ld == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    // printf("%d %d", ld, fd);

    return 0;
}