#include <stdio.h>

void printArr(int* arr,int size)
{
	printf("[");
	for(int i=0;i<size;i++)
	{
		printf("%d",arr[i]);
		if (i!=size-1)
			printf(",");
		else
			printf("]");
	}
}

void rightRotate(int* arr,int size,int k)
{
	for(int i=0;i<k;i++)
	{
		int temp=arr[size-1];
		for(int j=size-1;j>=1;j--)
			arr[j]=arr[j-1];
		arr[0]=temp;
	}
}

void leftRotate(int* arr,int size,int k)
{
	for(int i=0;i<k;i++)
	{
		int temp=arr[0];
		for(int j=0;j<size-1;j++)
			arr[j]=arr[j+1];
		arr[size-1]=temp;
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
	int choice;
	printf ("Enter 1 for right circular rotation\n2 for left circular rotation:");
	scanf ("%d", &choice);
	int k;
	printf ("Enter the number of times to rotate:");
	scanf ("%d", &k);
	switch(choice)
	{
	case 1:
		printf("\nThe array before rotation:\n");
		printArr(arr,n);
		rightRotate(arr,n,k);
		printf("\nThe array after rotation:\n");
		printArr(arr,n);
		break;
	case 2:
		printf("\nThe array before rotation:\n");
		printArr(arr,n);
		leftRotate(arr,n,k);
		printf("\nThe array after rotation:\n");
		printArr(arr,n);
		break;
	default:
		printf("Invalid choice");
	}
}
