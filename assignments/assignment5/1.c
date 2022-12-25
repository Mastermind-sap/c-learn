//https://www.geeksforgeeks.org/taking-string-input-space-c-3-different-methods/
//https://www.geeksforgeeks.org/generating-random-number-range-c/
//https://en.wikipedia.org/wiki/Buffer_overflow

#include <stdio.h>
#include <time.h>

int randomRange(int lower,int upper)
{
	return (clock()%(upper-lower+1))+lower;	
}

int isNotNull(char s[],int l)
{
    for (int i = 0; i < l-1; i++)
        if (s[i] != '\0')
            return 1;
    return 0;
}

void shuffle(char str1[],int l1,char str2[],int l2,char res[])
{	
	//method 1
	for(int i=0;i<l1+l2-1;i++)
	{
		// if 1->str1 0->str2
		if(randomRange(0,1)&&isNotNull(str1,l1))
		{
			int c=randomRange(0,l1-1);
			if (str1[c]!='\0')
			{
				res[i]=str1[c];
				str1[c]='\0';
			}
			else
				i--;
		}
		else if(isNotNull(str2,l2))
		{
			int c=randomRange(0,l2-1);
			if (str2[c]!='\0')
			{
				res[i]=str2[c];
				str2[c]='\0';
			}
			else
				i--;
		}
	}		
}

void main()
{	
	int l1,l2;
	printf("Enter first string size:");
	scanf("%d",&l1);
	printf("Enter second string size:");
	scanf("%d",&l2);
	char str1[l1],str2[l2],res[l1+l2-1];
	printf("Enter first string:");
	//scanf("%s",str1);->Problem in it takes " " as the endpoint of input and after " " it takes input for the next variable
	//scanf("%[^\n]s",str1); //Endpoint of input is new line->will not take input here read the below link
	//https://stackoverflow.com/questions/43029178/ns-in-scanf-does-not-wait-for-input-and-gets-skipped
	//scanf(" %[^\n]s",str1);
	getchar();//this required to take the extra \n such that fgets doesnt terminate at the beginning as scanf doesnt ake the last \n
	fgets(str1,l1,stdin); 
	printf("Enter second string:");
	getchar();
	fgets(str2,l2,stdin);
	printf("Str1:%s\n",str1);
	printf("Str2:%s\n",str2);
	shuffle(str1,l1,str2,l2,res);
	printf("Result:%s\n",res);
}

