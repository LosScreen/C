#include <stdio.h>
void main (){
	int sum=0,num,i=1;
	
	printf ("Enter Your number #%d : ",i);
	scanf (" %d",&num);
	while (num % 2 != 0 || num == 0){
		sum = sum + num;
		i++;
		printf ("Enter Your number #%d : ",i);
		scanf (" %d",&num);
	}
		sum = sum + num;
	printf ("\nTotal : %d",sum);
}
