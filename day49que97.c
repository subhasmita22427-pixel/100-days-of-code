#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    if (name[0] != '\0' && name[0] != '\n') 
    {
        printf("%c. ", name[0]);
    }
    for (int i = 0; i < strlen(name); i++) 
    {
        if (name[i] == ' ' && name[i + 1] != '\0' && name[i + 1] != '\n') 
        {
            printf("%c. ", name[i + 1]);
        }
    }
    printf("\n");
    return 0;
}
