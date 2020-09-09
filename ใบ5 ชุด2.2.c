#include <stdio.h>
void main ()
{
	int i,num[5];
	for(i=0;i<5;i++)
	{
		printf ("Enter your number #%d : ",i+1);
		scanf ("%d",&num[i]);
	}
	printf ("\nLess than 10\n\n");
	for(i=0;i<5;i++)
	{
		if (num[i] < 10)
		{
			printf ("%d ",num[i]);
		}
	}
	printf ("\n\nOver 100\n\n");
	for(i=0;i<5;i++)
	{
		if (num[i] > 100)
		{
			printf ("%d ",num[i]);
		}
	}
}
