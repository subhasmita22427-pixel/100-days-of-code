#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n')
 { name[len - 1] = '\0'; }
    char initials[100] = "";
    char *token = strtok(name, " ");
    char surname[100] = "";
    while (token != NULL) 
    {
        char *next = strtok(NULL, " ");
        if (next == NULL) 
        {
            strcpy(surname, token);
            break;
        } else 
        {
            strncat(initials, token, 1); 
            strcat(initials, ". ");
            token = next;
        }
    }
    printf("Formatted Name: %s%s\n", initials, surname);
    return 0;
}
