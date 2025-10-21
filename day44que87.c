#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int spaces = 0, digits = 0, specialChars = 0;

    printf("Enterstring: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ' ') {
            spaces++;
        } else if (str[i] >= '0' && str[i] <= '9') 
        {
            digits++;
        } else if ((str[i] >= '!' && str[i] <= '/') || 
                   (str[i] >= ':' && str[i] <= '@') || 
                   (str[i] >= '[' && str[i] <= '`') || 
                   (str[i] >= '{' && str[i] <= '~')) {
            specialChars++;
        }}
    printf("No. of spaces: %d\n", spaces);
    printf("No. of digits: %d\n", digits);
    printf("No. of special characters: %d\n", specialChars);
    return 0;
}
