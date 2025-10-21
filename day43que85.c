#include <stdio.h>
#include <string.h>
#define max 100
int main() 
{
    char str[max], rev[max];
    int len, i, j;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; 

    len = strlen(str);
    j = 0;
    for (i = len - 1; i >= 0; i--)
 {
        rev[j++] = str[i];
    }
    rev[j] = '\0'; 
    printf("Reversed string: %s\n", rev);
    return 0;
}
