#include <stdio.h>
#include <string.h>
int main()
{ 
    char str[100], temp;
    int i, j, start, end;
    printf("Entera sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    start = 0;
    for (i = 0; ; i++) 
    {
        if (str[i] == ' ' || str[i] == '\0')
         {
            end = i - 1;
            while (start < end) 
            {
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
            start = i + 1; 
        }
        if (str[i] == '\0') 
        {
            break;
        }
    }
    printf("Reversed words: %s\n", str);
    return 0;

}
