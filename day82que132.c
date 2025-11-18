#include <stdio.h>
enum Signal
{ red = 10,
    yellow,
    green
};
int main() 
{ enum Signal light = yellow;  
    if (light == red) 
    { printf("Stop\n"); } 
    else if (light == yellow) 
    {  printf("Wait\n"); } 
    else if (light == green)
    {  printf("Go\n");  } 
    else 
    { printf("Invalid Signal\n");}
    return 0;
}
