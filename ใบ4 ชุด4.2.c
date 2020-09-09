#include <stdio.h>
void main (){
	int i,num,total;
	for (i=0;i<5;i++){
		printf ("Enter your number #%d : ",i+1);
		scanf ("%d",&num);
		total = total+num;
	}
	if (total > 10)
	printf ("\nAmount over 10 : %d",total);
}

