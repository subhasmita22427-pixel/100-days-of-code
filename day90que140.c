#include <stdio.h>
#include <string.h>
enum Gender 
{ MALE = 1,
  FEMALE,
  OTHER
};
struct Person 
{ enum Gender g;};
int main() 
{char input[20];
    struct Person p;
    scanf("%s", input);
    char *value = strchr(input, '=');
    if (value != NULL) value++;  
    if (strcmp(value, "MALE") == 0)
    p.g = MALE;
    else if (strcmp(value, "FEMALE") == 0)
    p.g = FEMALE;
    else
    p.g = OTHER;
    switch (p.g) 
    { case MALE:   printf("Male\n"); break;
      case FEMALE: printf("Female\n"); break;
      default:     printf("Other\n");
    }
    return 0;
}
