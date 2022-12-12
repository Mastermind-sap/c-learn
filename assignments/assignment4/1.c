#include <stdio.h>
//#include <stdlib.h>

void unique(int arr[],int size)
{
	int check=0;
	for(int i=0;i<size;i++)
	{
		int flag=0;
		for(int j=0;j<size;j++)
		{
			if ((arr[i]==arr[j])&&(i!=j))
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{	
			if(check==0)
			{
				printf("The unique array elements are:\n");
			}
			else
				printf(",");
			check=1;
			printf("%d",arr[i]);
		}
	}
	if(check==0)
		printf("There are no unique array elements\n");
}

void main ()  
{
	int n;
	printf ("Enter the number of elements in the array:");
	scanf ("%d", &n);
	if (!(n>0))
	{
		printf("Invalid array size");
		//exit(0); //another way needs extra library stdlib.h
		return;
	}
	int arr[n];
	printf ("Enter the elements of the array:\n"); 
	for (int i=0;i<n;i++)
	{
		printf ("Element %d:",(i+1));  
		scanf ("%d",&arr[i]);  
	}
	unique(arr,n);
}
