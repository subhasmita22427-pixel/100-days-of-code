
#include <stdio.h>
int main() 
{
    FILE *fp;
    char filename[150];
    char text[250];
    printf("Enter the file name: ");
    scanf("%s", filename);
    getchar();
    fp = fopen(filename, "a");
    if (fp == NULL) 
    { printf("Could not open file.\n");
        return 1;
    }
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);
    fputs(text, fp);
    fclose(fp);
    printf("Text appended to %s\n", filename);
    return 0;
}
