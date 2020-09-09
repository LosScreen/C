#include <stdio.h>
void main (){
	int num;
	
	printf ("Enter your number : ");
	scanf ("%d",&num);
	if (num<1)
	printf ("\nLess than 1");
	if (num>=1 && num<=10)
	printf ("\nBetween 1 to 10");
	if (num>10)
	printf ("\nMore than 10");
}
