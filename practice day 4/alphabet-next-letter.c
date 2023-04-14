#include <stdio.h>
int main()
{
    char alp;
    scanf("%c", &alp);
    if (alp < 122 && alp >= 97)
    {
        printf("%c\n", alp + 1);
    }
    else
    {
        printf("a\n");
    }

    return 0;
}