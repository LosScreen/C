#include <stdio.h>
void main (){
	int num[5],i,total=0;
	
	for (i=0;i<5;i++){
		printf ("Enter your number #%d : ",i+1);
		scanf ("%d",&num[i]);
	}
	for (i=0;i<5;i++){
		total = total+num[i];
	}
	if (total < 10 || total > 100){
		printf ("\nLess than 10 and more than 100 : ");
		printf ("%d",total);
	}
}
