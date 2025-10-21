  #include <stdio.h>
  #include <string.h>
  int main()
   {
      char str[100];
      printf("Enter string: ");
      fgets(str, sizeof(str), stdin);
      size_t len = strlen(str);
      if (len > 0 && str[len - 1] == '\n') 
      {
          str[len - 1] = '\0';
      }

      for (int i = 0; str[i] != '\0'; i++)
       {
          if (str[i] >= 'a' && str[i] <= 'z')
          {
              str[i] = str[i] - ('a' - 'A'); 
          } else if (str[i] >= 'A' && str[i] <= 'Z') 
          {
              str[i] = str[i] + ('a' - 'A');
          }
      }

      printf("Toggled case string: %s\n", str);
      return 0;
  }
