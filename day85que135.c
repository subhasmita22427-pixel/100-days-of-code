#include <stdio.h>
enum Code
{ SUCCESS = 10,
    FAILURE = 11,
    TIMEOUT = 12
};
int main() 
{enum Code c;
  for (c = SUCCESS; c <= TIMEOUT; c++)
  {  printf("Enum value = %d\n", c);
   return 0;
}
