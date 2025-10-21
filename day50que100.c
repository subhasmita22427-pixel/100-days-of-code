#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, j, len;
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; 
    len = strlen(str);
    printf("all substrings of the string are:\n");
    for (i = 0; i < len; i++)
    {for (j = i; j < len; j++)
        { for (int k = i; k <= j; k++)
            { putchar(str[k]); }
            putchar('\n');
        }
    }
    return 0;
}
