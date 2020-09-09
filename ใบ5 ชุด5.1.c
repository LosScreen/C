#include <stdio.h>
void main (){
	int num;
	
	printf ("Enter your grade number : ");
	scanf ("%d",&num);
	
	printf ("Your grade : ");
	if (num > 79 )
	printf ("A");
	else if (num > 74 && num < 80)
	printf ("B+");
	else if (num > 69 && num < 75)
	printf ("B");
	else if (num > 64 && num < 70)
	printf ("C+");
	else if (num > 59 && num < 65)
	printf ("C");
	else if (num > 54 && num < 60)
	printf ("D+");
	else if (num > 49 && num < 55)
	printf ("D");
	else if (num < 50)
	printf ("F");
}
