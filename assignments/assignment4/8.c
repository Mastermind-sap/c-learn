#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double compute(double a[],double b[],int n)
{	
	double result=1;
	for(int i=0;i<n;i++)
	{
		result*=sqrt(abs(a[i]-b[i]));
	}
	result/=(double)n;
	return result;
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
	double a[n],b[n];
	printf ("Enter the elements of the array a:\n"); 
	for (int i=0;i<n;i++)
	{
		printf ("Element %d:",(i+1));  
		scanf ("%lf",&a[i]);  
	}
	printf ("Enter the elements of the array b:\n"); 
	for (int i=0;i<n;i++)
	{
		printf ("Element %d:",(i+1));  
		scanf ("%lf",&b[i]);  
	}
	printf("Result: %lf",compute(a,b,n));
}
