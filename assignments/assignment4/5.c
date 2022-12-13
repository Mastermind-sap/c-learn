#include <stdio.h>

void missing(int arr[],int n,int result[])
{
	int k=0;
	for(int i=1;i<=n;i++)
	{
		int flag=0;
		for(int j=0;j<n-1;j++)
		{
			if(arr[j]==i)
			{
				flag=1;
				break;
			}
		}
		if (flag==0)
			result[k++]=i;
	}
}

void main ()  
{
	int n;
	printf ("Enter n:");
	scanf ("%d", &n);
	if (!(n-1>0))
	{
		printf("Invalid array size");
		//exit(0); //another way needs extra library stdlib.h
		return;
	}
	int arr[n-1];
	printf ("Enter the elements of the array:\n"); 
	for (int i=0;i<n-1;i++)
	{
		printf ("Element %d:",(i+1));  
		scanf ("%d",&arr[i]);
		if (!((arr[i]<=n) && (arr[i]>=1)))
		{
			printf("Invalid Input\nArray element should be in the range [1,%d]",n);
			return;
		 }
	}
	int result[n];
	for(int i=0;i<n;i++) result[i]=-1;
	missing(arr,n,result);
	if(result[1]==-1)
		printf("The missing number is:%d",result[0]);
	else
	{
		printf("There are more than one missing number\n");
		printf("The missing numbers are:\n");
		for(int i=0;i<n;i++)
		{	
			if(result[i]==-1)
				break;
			else if(i==0)
				printf("%d",result[i]);
			else
				printf(",%d",result[i]);
		}
	}
}
			
