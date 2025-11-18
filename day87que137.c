#include <stdio.h>
#include <string.h>
enum Role 
{
    ADMIN = 1,
    USER,
    GUEST
};
int main() 
{  char input[20];
    enum Role r;
    scanf("%s", input);
    if (strcmp(input, "ADMIN") == 0)
        r = ADMIN;
    else if (strcmp(input, "USER") == 0)
        r = USER;
    else if (strcmp(input, "GUEST") == 0)
        r = GUEST;
    else 
    { printf("Invalid Role\n");
      return 0;
    }
    switch (r) 
    { case ADMIN:
      printf("Welcome Admin!\n");
      break;
      case USER:
      printf("Welcome User!\n");
      break;
      case GUEST:
      printf("Welcome Guest!\n");
      break;
    }
    return 0;
}
