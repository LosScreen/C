#include <stdio.h>
void main ()
{
	int number,i,j;
	
	printf ("Enter the number : ");
	scanf ("%d",&number);
	
	for (i=0;i<=number;i++){
		for(j=0;j<=i;j++){
			printf ("%d ",j);
		}
		printf ("\n");
	}
	for (i=number;i>=0;i--){
		for(j=0;j<=i-1;j++){
			printf ("%d ",j);
		}
		printf ("\n");
	}
}



