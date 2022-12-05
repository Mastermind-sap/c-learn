#include <stdio.h>

void main()
{
for (int line = 1; line <= 5; line++) 
    {	
	for(int space=1;space<=5-line;space++)
		{
			printf("  ");
		}
        int C = 1; 
        for (int i = 1; i <= line; i++) 
        {
            printf("%d   ", C); 
            C = C * (line - i) / i;
        }
        printf("\n");
    }
}
