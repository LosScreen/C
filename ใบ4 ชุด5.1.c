#include <stdio.h>
void main (){
	int num[5],i;
	
	for (i=0;i<5;i++){
		printf ("Enter your number #%d : ",i+1);
		scanf ("%d",&num[i]);
	}
	printf ("\nThree divisible numbers : ");
	for (i=0;i<5;i++){
		if (num[i]%3==0)
		printf ("%d ",num[i]);
	}
}

