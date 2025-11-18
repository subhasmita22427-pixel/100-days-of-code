#include <stdio.h>
enum Month 
{ JAN = 101,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
};
int main() 
{ enum Month m;
    for (m = JAN; m <= DEC; m++)
    { printf("Month code %d: ", m);
     switch (m) 
     { case JAN: case MAR: case MAY: case JUL:
       case AUG: case OCT: case NOV:
       printf("31 days\n");
       break;
       case APR: case JUN: case SEP: case DEC:
       printf("30 days\n");
       break;
       case FEB:
       printf("28 or 29 days\n");
       break;
       default:
       printf("Unknown month\n");
    }
   }
    return 0;
}
