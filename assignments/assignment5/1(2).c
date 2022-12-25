#include <stdio.h>
#include <time.h>

int randomRange(int lower,int upper)
{
	return (clock()%(upper-lower+1))+lower;	
}

void shuffle(char str1[],int l1,char str2[],int l2,char res[])
{	
	//method 2
	for(int i=0;i<l1-1;i++)
		res[i]=str1[i];
	for(int i=l1-1;i<l1+l2-1;i++)
		res[i]=str2[i-(l1-1)];
	for(int i=0;i<l1+l2-1;i++)
	{
		int c=randomRange(0,l1+l2-2);
		if (i!=c)
		{
			res[i]=res[i]^res[c];
			res[c]=res[i]^res[c];
			res[i]=res[i]^res[c];
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

