#include <stdio.h>
void main (){
	int num=1,i;
	
	for (i=0;i<10;i++){
		printf ("%d^2 : %d ",num,num*num);
		printf ("\n%d^3 : %d \n\n",num,num*num*num);
		num++;
	}
}
