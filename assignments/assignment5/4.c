#include <stdio.h>

int check(char num[])
{
	int point=0,e=0,f=0;
	for(int i=0;num[i]!='\0';i++)
	{
		if((num[i]!='.')&&(num[i]!='+')&&(num[i]!='-')&&(num[i]!='E')&&(num[i]!='e')&&(num[i]!='F')&&(num[i]!='f')&&((num[i]<48)||(num[i]>57)))
			return 0;
		if (num[i]=='.')
		{
			if(point==0)
				point=1;
			else
				return 0;
			if ((num[i-1]<48)||(num[i-1]>57)||(num[i+1]<48)||(num[i+1]>57))
				return 0;
		}
		if(((num[i]=='f')||(num[i]=='F'))&&(num[i+1]!='\0'))
			return 0;
		if ((num[i]=='e')||(num[i]=='E'))
		{
			if(e==0)
				e=1;
			else
				return 0;
			if(((num[i+1]<48)||(num[i+1]>57))&&(num[i+1]!='+')&&(num[i+1]!='-'))
				return 0;

		}
		if((num[i]=='+')||(num[i]=='-'))
		{
			if((num[i+1]<48)||(num[i+1]>57))
				return 0;
			if(((num[i-1]!='e')&&(num[i-1]!='E'))&&(i!=0))
				return 0;
		}
		if ((num[i]=='f')||(num[i]=='F'))
		{
			if(f==0)
				f=1;
			else
				return 0;
		}
	}
	return 1;
}

void main()
{
	printf("Enter the floating point number:");
	char number[100];
	fgets(number,100,stdin);
	int l;
	for(l=0;number[l]!='\0';l++);
	number[l-1]='\0';
	if (check(number))
		printf("Valid floating point number");
	else
		printf("Invalid floating point number");
}

