#include <Stdio.h>
void main ()
{
	int num;
	printf ("Please select ...\n");
	printf ("1. to print Hello\n");
	printf ("2. to print Hi!\n");
	printf ("3. tp print How are you?\n");
	printf ("\nPlease select number : ");
	scanf ("%d",&num);
	if (num == 1)
		printf ("\nHello");
	else if (num == 2)
		printf ("\nHi!");
	else if (num == 3)
		printf ("\nHow are you?");
}
