#include <stdio.h>
enum Status 
{ SUCCESS = 5,
    FAILURE,
    TIMEOUT
};
int main() 
{ enum Status result = TIMEOUT; 
    if (result == SUCCESS) 
    { printf("Operation completed successfully.\n");}
    else if (result == FAILURE) 
    {  printf("Operation failed. Please try again.\n")}
    else if (result == TIMEOUT) 
    { printf("Operation timed out. Check your connection.\n");}
    else 
    { printf("Unknown status.\n"); }
    return 0;
}
