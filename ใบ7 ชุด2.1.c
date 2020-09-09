#include <stdio.h>
void main (){
	int i=0;
	float avg,num,sum=0;
	for (i=0;i<10;i++){
		printf ("Enter number #%d : ",i+1);
		scanf ("%f",&num);
		sum = sum+num;
	}
	avg = sum/10;
	if (avg > 1.99 && avg < 22.00){
	printf ("\nAverage between 2 and 22");
	printf ("\nAVG = %.2f",avg);
	}
	else
	printf ("\nNot Between 2 and 22");
}
