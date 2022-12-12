//https://www.youtube.com/watch?v=uI1J8o1rY10

#include <stdio.h>

int largestSmallest(int arr[],int size,int * result)
{
	result[0]=arr[0];
	result[1]=arr[0];
	for(int i=1;i<size;i++)
	{
		if (result[0]<arr[i]) result[0]=arr[i];
		if (result[1]>arr[i]) result[1]=arr[i];
	}
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
	int large_small[2];
	largestSmallest(arr,n,large_small);
	printf("Largest element:%d\n",large_small[0]);
	printf("Smallest element:%d\n",large_small[1]);
}
