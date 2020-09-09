#include <stdio.h>
void main (){
	int num,total=0,cnt,i=0;
	
		printf ("Enter your number #%d : ",i+1);
		scanf ("%d",&num);
	while (num > 3 && num < 45){
		cnt++;
				i++;
				total =  total+num;
		printf ("Enter your number #%d : ",i+1);
		scanf ("%d",&num);
	}

	total = total/cnt-1;
	printf ("Average : %d",total);
}
