#include <stdio.h>
int main() 
{
    FILE *srcFile, *destFile;
    char srcName[100], destName[100];
    char ch;
    printf("Enter source file name: ");
    scanf("%s", srcName);
    printf("Enter destination file name: ");
    scanf("%s", destName);
    srcFile = fopen(srcName, "r");
    if (srcFile == NULL) 
    { printf("Error opening file.\n");
        return 1;
    }
    destFile = fopen(destName, "w");
    if (destFile == NULL) 
    {
        printf(" Could not create destination file.\n");
        fclose(srcFile);
        return 1;
    }
    while ((ch = fgetc(srcFile)) != EOF)
   { fputc(ch, destFile); }
    printf("File copied from %s to %s\n", srcName, destName);
    fclose(srcFile);
    fclose(destFile);
    return 0;
}
