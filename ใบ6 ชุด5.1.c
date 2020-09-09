#include <stdio.h>
void main (){
	int num,total=0,num1,cnt,i=0;
	
		printf ("Enter your number loob : ");
		scanf ("%d",&num);
	for (i=0;i<num;i++){
		printf ("Enter your number #%d : ",i+1);
		scanf ("%d",&num1);
		if (num1 < 4 && num1 < 56){
			cnt++;
		}
	}
	printf ("Amount between 5 to 55 : %d",cnt);
}
