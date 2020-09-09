#include <stdio.h>
void main (){
	int num[5],i,total,cnt=0;
	
	for (i=0;i<5;i++){
		printf ("Enter your number #%d : ",i+1);
		scanf ("%d",&num[i]);
	}
	for (i=0;i<5;i++){
		if (num[i]>10){
		cnt++;
		total = total+num[i];
	}
	}
	total = total/cnt;
	printf ("\nAverage : %d",total);
}

