#include <stdio.h>

void main()
{
	int choice,n1,n2,res;
	printf("Enter choice:");
	choice=getchar();
	printf("Enter n1:");
	scanf("%d",&n1);
	printf("Enter n2:");
	scanf("%d",&n2);
	switch(choice)
	{
		case '+':
			res=n1+n2;
			break;
		case '-':
			res=n1-n2;
			break;
		case '*':
			res=n1*n2;
			break;
		case '/':
			res=n1/n2;
			break;
		case '%':
			res=n1%n2;
			break;
		default:
			printf("Invalid choice\n");
			return;
	}
	printf("Result: %d",res);
}
		
			
