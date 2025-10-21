#include <stdio.h>
#include <string.h>
int main() 
{
    char sentence[1000];
    char longestWord[100];
    int maxlen = 0;
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    char *word = strtok(sentence, " \n");
    while (word != NULL) 
    {
        int length = strlen(word);
        if (length > maxlen) 
        {
    maxlen = length;
            strcpy(longestWord, word);
        }
        word = strtok(NULL, " \n");
    }
    printf("The longest word is: %s\n", longestWord);
    printf("Length of the longest word: %d\n", maxlen);
    return 0;
}
