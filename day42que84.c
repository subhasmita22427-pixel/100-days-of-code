#include <stdio.h>
#define max 100
int main() 
{
    char str[max];
    int i = 0;
    printf("Enter a lowercase string: ");
    fgets(str, max, stdin);
    while (str[i] != '\0') 
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - ('a' - 'A');
        }
        i++;
    }
    printf("Uppercase string: %s", str);
    return 0;
}
