#include <stdio.h>
void main (){
	int num;
	printf ("Enter your number : ");
	scanf ("%d",&num);
	
	if (num < 10)
		printf ("\nLess than 10");
	else if(num > 10)
		printf ("\nMore than 10");
}

