#include <stdio.h>
enum Light 
{ RED = 0,
    YELLOW,
    GREEN
};
int main() 
{ enum Light l;
  for (l = RED; l <= GREEN; l++)
  {if (l == RED)
   printf("RED=%d\n", l);
   else if (l == YELLOW)
   printf("YELLOW=%d\n", l);
   else if (l == GREEN)
   printf("GREEN=%d\n", l);
  }
    return 0;
}
