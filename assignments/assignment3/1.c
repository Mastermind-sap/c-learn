#include <stdio.h>
int main()
{
	int i,j,c1=0,c2=0,c3=0,c4=0;
	for(i=0;i<10;i++,c1++)
	{
		for(j=0;j<100;j++,c1++)
		{
			c2++;
		}
	}
	printf("Counter1=%d Inside=%d\n",c1,c2);
	for(i=0;i<100;i++,c3++)
	{
		for(j=0;j<10;j++,c3++)
		{
			c4++;
		}
	}
	printf("Counter2=%d Inside=%d\n",c3,c4);
	return 0;
}
