//finding substring substr[] in str[]
  // it returns 1 if substr[] is a substring of str[]
  // return -1, otherwise
  
  int substring(char str[], char substr[])
  {
      int i = 0, j = 0;
      while ((str[j] != '\0')&&(substr[i] != '\0')) {
          if (str[j] != substr[i]) {
              j++;
              i = 0;
          }
          else {
              i++;
              j++;
          }
      }
      if (substr[i] == '\0')
          return 1;
      return -1;
  }

