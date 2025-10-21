#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100];
    char ch;
    int i, freq = 0;
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter a character: ");
    scanf(" %c", &ch);
    for(i = 0; str[i] != '\0'; i++) 
    {
        if(str[i] == ch) 
        {
            freq++;
        }
    }
    printf("The frequency of '%c' in the string is: %d\n", ch, freq);
    return 0;
}
