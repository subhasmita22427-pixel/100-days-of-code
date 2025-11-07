#include <stdio.h>
#include <ctype.h> 
int main() 
{
    FILE *inputFile, *outputFile;
    char ch;
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) 
    { printf("Could not open input.txt\n");
        return 1;
    }
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL)
   { printf("ECould not create output.txt\n");
        fclose(inputFile);
        return 1;
    }

  
    while ((ch = fgetc(inputFile)) != EOF) 
    { fputc(toupper(ch), outputFile); }
    fclose(inputFile);
    fclose(outputFile);
    printf(" Check 'output.txt' for the result.\n");
    return 0;
}
