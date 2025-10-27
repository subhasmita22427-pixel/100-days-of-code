#include <stdio.h> 
int lenght(char str[]) 
{
    int n = 0;
    while (str[n] != '\0') 
    {
        n++;
    }
    return n;
}
int longestsubstring(char str[]) 
{
    int maxLength = 0;
    int n = lenght(str);
    for (int i = 0; i < n; i++) 
    {
        int visited[256] = {0};
        for (int j = i; j < n; j++) 
        {
            if (visited[(unsigned char)str[j]] == 1) 
            {
                break;
            } 
            else 
            {
                visited[(unsigned char)str[j]] = 1;
                int currentLength = j - i + 1;
                if (currentLength > maxLength) 
                {
                    maxLength = currentLength;
                }
            }
        }
    }
    return maxLength;
}
int main() 
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int result = longestsubstring(str);
    printf("ouput lentgh : %d\n", result);       
    return 0;
}
