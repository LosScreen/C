#include <stdio.h>
void main (){
	int num[5],i,total=0,cnt;
	
	for (i=0;i<5;i++){
		printf ("Enter your number #%d : ",i+1);
		scanf ("%d",&num[i]);
	}
	for (i=0;i<5;i++){
		if (num[i] > 9 && num[i] < 101){
			total = total + num[i];
			cnt++;
		}
	}
	total = total/cnt;
	printf ("Average : %d",total);
}
