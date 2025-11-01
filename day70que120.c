#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int capitalizenext = 1; 
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == ' ') 
        { capitalizenext = 1; } 
        else if (capitalizenext && str[i] >= 'a' && str[i] <= 'z')
         { str[i] = str[i] - ('a' - 'A'); 
            capitalizenext = 0;
         } 
        else 
        { capitalizenext = 0; }
    }

    printf("Converted string: %s", str);
    return 0;
}
