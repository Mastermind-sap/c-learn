#include <stdio.h>
#include <time.h>

int randomRange(int lower,int upper)
{
	return (clock()%(upper-lower+1))+lower;	
}

void encrypt(char str[],char key[])
{	
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		int inc=randomRange(0,3);
		str[i]=str[i]+inc;
		key[i]=inc+48;
	}
	key[i]='\0';
}

void decrypt(char str[],char key[])
{	
	for(int i=0;str[i]!='\0';i++)
		str[i]-=(key[i]-48);
}

void main()
{
	int choice,l;
	printf("Enter 1 to encrypt\n2 to decrypt:");
	scanf("%d",&choice);
	printf("Enter length of string:");
	scanf("%d",&l);
	if(l<2)
	{
		printf("Invalid length");
		return;
	}
	char str[l],key[l];
	printf("Enter string:");
	getchar();
	fgets(str,l,stdin);
	switch(choice)
	{
		case 1:
			encrypt(str,key);
			printf("Encrypted string:%s\n",str);
			printf("Key:%s\n",key);
			break;
		case 2:
			printf("Enter key:");
			getchar();
			fgets(key,l,stdin);
			decrypt(str,key);
			printf("Decrypted string: %s\n",str);
			break;
		default:
			printf("Invalid choice");
	}
}

