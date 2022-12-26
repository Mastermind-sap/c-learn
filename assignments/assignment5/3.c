#include <stdio.h>

void reverse(char str[],char res[],int l)
{	
	int last=l-2,k=0;
	for(int i=l-2;i>-1;i--)
	{
		if ((str[i]==' ')||(i==0))
		{
			int j;
			if (i==0) j=i;
			else j=i+1;
			for(;j<=last;j++,k++)
			{
				res[k]=str[j];
			}
			res[k]=' ';
			k++;
			last=i-1;
		}
	}
	res[k-1]='\0';
}

void main()
{
	printf("Enter length of string:");
	int l;
	scanf("%d",&l);
	printf("Enter string:");
	char str[l];
	getchar();
	fgets(str,l,stdin);
	int i;
	for(i=l-2;i>-1;i--)
	{
		if(str[i]!=' ')
			break;
	}
	str[i+1]='\0';
	for(l=0;str[l]!='\0';l++);
	char res[l];
	reverse(str,res,l);
	printf("Reversed string:%s",res);
}
