#include <stdio.h>

int largest(int arr[],int size)
{
	int largest=arr[0];


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
