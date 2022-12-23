//Implementation of library function strcmp()
//Compare str1[] and str2[]
//Return 0 if str1[] and str2[] are equal
//Return 1 if str1[] is greater than str2[]
//Return -1 if str1[] is less than str2[].
int compare(char str1[], char str2[])
{
	int i,j,k;
        for(i=0;str1[i]!='\0'&&str2[i]!='\0';i++)
         {
                 if(str1[i]>str2[i])
                         return 1;
                 if(str1[i]<str2[i])
                         return -1;
         }
         if(str1[i]!='\0'&&str2[i]=='\0')
                 return 1;
         if(str1[i]=='\0'&&str2[i]!='\0')
                 return -1;
         return 0;
}

