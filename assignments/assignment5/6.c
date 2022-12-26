#include <stdio.h>

int checkLength(char str[])
{
	int l=0;
	for(;str[l]!='\0';l++);
	if(l>=11)
		return 1;
	else
		return 0;
}

int checkTwo(char str[])
{
	int uc=0,lc=0,s=0,d=0;
	for(int i=0;str[i]!='\0';i++)
	{
		if((str[i]>='A')&&(str[i]<='Z'))
			uc++;
		else if((str[i]>='a')&&(str[i]<='z'))
			lc++;
		else if((str[i]>='0')&&(str[i]<='9'))
			d++;
		else
			s++;
	}
	if((uc>=2)&&(lc>=2)&&(s>=2)&&(d>=2))
		return 1;
	else
		return 0;
}

int checkConsecutive(char str[])
{
	for(int i=1;str[i]!='\0';i++)
	{
		if(str[i]==str[i-1])
			return 0;
	}
	return 1;
}
void main()
{
	printf("Password:");
	char pass[100];
	fgets(pass,100,stdin);
	if((checkLength(pass))&&(checkTwo(pass))&&(checkConsecutive(pass)))
		printf("Valid password");
	else
		printf("Invalid password");
}
