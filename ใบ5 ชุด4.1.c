#include <stdio.h>
void main (){
	int num[5],i,suc,cnt=0;
	
	for (i=0;i<5;i++){
		printf ("Enter your number #%d : ",i+1);
		scanf ("%d",&num[i]);
	}
	printf ("\nAmount ending number 4 : ");
	for (i=0;i<5;i++){
		suc = num[i]/10;
		suc = suc*10;
		num[i] = num[i]-suc;
		if (num[i] == 4){
		cnt++;
	}
	}
	printf ("%d",cnt);
}
