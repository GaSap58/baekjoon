#include <stdio.h>
#include <string.h>

int main(void)
{
    char c[101];
    scanf("%s", c);
    int i = 0;

    for (int i = 0; i < strlen(c); i++)
    {
        printf("%c", c[i]);
        if ((i + 1) % 10 == 0)
            printf("\n");
    }
    
    return 0;
}