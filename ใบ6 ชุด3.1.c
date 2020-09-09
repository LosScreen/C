#include <stdio.h>
void main (){
	int num[10],num1=99,i=0,key=0,j=0;
	
	while (i < 10 && num1 != 0){
		printf ("Enter number #%d : ",i+1);
		scanf ("%d",&num1);
		num[i] = num1;
		i++;
		if (num1 > 10)
		key = 1;
	}
	if (key == 1){
		printf ("\nOver 10\n");
	for (j=0;j<i;j++){
		if (num [j] > 10)
		printf ("%d ",num[j]);
		}
	}
	else if (key == 0)
	printf ("\nNot Over 10");
}
