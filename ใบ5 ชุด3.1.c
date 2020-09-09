#include <stdio.h>
void main (){
	int num[5],i,suc;
	
	for (i=0;i<5;i++){
		printf ("Enter your number #%d : ",i+1);
		scanf ("%d",&num[i]);
	}
	printf ("\nRequired number : ");
	for (i=0;i<5;i++){
		suc = num[i]/10;
		suc = suc*10;
		num[i] = num[i]-suc;
		if (num[i] != 0 && num[i]%2 == 0){
		num[i] = num[i]+suc;
		printf ("%d ",num[i]);
	}
	}
	
}
