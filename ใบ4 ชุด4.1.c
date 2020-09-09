#include <stdio.h>

void main (){
	
	char sex;
	printf ("Are you male of female : ");
	scanf ("%c",&sex);
	
	if (sex=='m')
	printf ("\nWelcome Gentleman !");
	else if (sex == 'f')
	printf ("\nWelcome Madam !");
}

