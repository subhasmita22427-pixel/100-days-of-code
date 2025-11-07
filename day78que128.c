#include <stdio.h>
#include <ctype.h> 
int main() 
{  FILE *fp;
    char filename[] = "file.txt";
    char ch;
    int vowels = 0, consonants = 0;
    fp = fopen(filename, "r");
    if (fp == NULL) 
    { printf("Error: Could not open %s\n", filename);
        return 1; }
    while ((ch = fgetc(fp)) != EOF) 
    { ch = tolower(ch);
        if (isalpha(ch))
         {  if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    fclose(fp);
    printf("File name: %s\n", filename);
    printf("Total vowels: %d\n", vowels);
    printf("Total consonants: %d\n", consonants);
    return 0;
}
