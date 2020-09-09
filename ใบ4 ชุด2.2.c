#include <stdio.h>
void main ()
{
	int i,num[5],cnt=0;
	for(i=0;i<5;i++)
	{
		printf ("Enter your number #%d : ",i+1);
		scanf ("%d",&num[i]);
	}
	printf ("\nNumber ending in zero\n\n");
	for(i=0;i<5;i++)
	{
		if (num[i]%10==0)
		{
			printf ("%d ",num[i]);
			cnt++;
		}
	}
	printf ("\n\nAmount : %d",cnt);
}
