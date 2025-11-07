#include <stdio.h>

int main() 
{
    FILE *fp;
    char name[50];
    int age;
    fp = fopen("file.txt", "w");
    if (fp == NULL) 
    { printf("Error opening  file\n");
     return 1;
    }
    printf("Enter Name: ");
    scanf("%s", name);
    printf("Enter Age: ");
    scanf("%d", &age);
    fprintf(fp, "Name: %s Age: %d\n", name, age);
    fclose(fp);
    printf("File created  successfully!\n");
    return 0;
}
