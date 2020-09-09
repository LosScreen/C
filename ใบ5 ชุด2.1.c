#include <stdio.h>
void main ()
{
	int i,num[5],cnt=0;
	for(i=0;i<5;i++)
	{
		printf ("Enter your number #%d : ",i+1);
		scanf ("%d",&num[i]);
	}
	printf ("\nBetween numbers 10 and 50\n\n");
	for(i=0;i<5;i++)
	{
		if (num[i]%2==1)
		{
			if (num[i] > 9 && num[i] < 51)
			{
			printf ("%d ",num[i]);
			cnt++;
			}
		}
	}
	printf ("\n\nAmount : %d",cnt);
}
