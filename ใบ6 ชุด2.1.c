#include <stdio.h>
void main (){
	int i=1,j=0;
	float avg=0,num,sum=0;
	
	while (sum < 101){
		printf ("Enter number #%d : ",i);
		scanf ("%f",&num);
		sum = sum+num;
		i++;
		j++;
	}
	avg = sum / j;
	printf ("\nAVG = %.2f",avg);
}
