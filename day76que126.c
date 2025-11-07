#include <stdio.h>
int main() 
{
    FILE *fp;
    char line[200];
    char filename[] = "file.txt";
    fp = fopen(filename, "r");
    if (fp == NULL) 
    { printf("File does not exist \n", filename);
        return 1;
    }
    printf("\nContents of '%s':\n\n", filename);
    while (fgets(line, sizeof(line), fp) != NULL) 
    { printf("%s", line); }
    fclose(fp);
    return 0;
}
