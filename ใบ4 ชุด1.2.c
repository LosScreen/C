#include <stdio.h>
void main (){
	int num,num1,over=0,i,less=100;
	for (i=0;i<5;i++){
	printf ("Enter your number #%d : ",i+1);
	scanf ("%d",&num);
	
		if (num>over){
			over = num;
		}
		if (num<less){
			less = num;
		}
	}
	printf ("most : %d  least : %d",over,less);
}

