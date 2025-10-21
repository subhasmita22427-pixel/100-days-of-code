#include <stdio.h>
int main()
 {
    char str[50];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[count] != '\0' && str[count] != '\n')
 {
        count++;
    }
    printf("The length of the string is: %d\n", count);
    return 0;
}
