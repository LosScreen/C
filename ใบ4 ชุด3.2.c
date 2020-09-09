#include <stdio.h>
void main (){
	int num[5],i;
	for (i=0;i<5;i++){
		printf ("Enter your number #%d : ",i+1);
		scanf ("%d",&num[i]);
	}
	printf ("\nNumber of pairs : ");
	for (i=0;i<5;i++){
		if (num[i]%2 ==0)
		printf ("%d ",num[i]);
	}
}

