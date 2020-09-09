#include <stdio.h>
void main (){
	int money,thousand,thousandtotal,firhundred,firhundredtotal,hundred,hundredtotal,fifty,fiftytotal,twenty,twentytotal;
	printf ("Amount : ");
	scanf ("%d",&money);
	
	thousand = money/1000;
	thousandtotal = thousand;
	thousand=thousand*1000;
	money = money-thousand;
	
	firhundred = money/500;
	firhundredtotal = firhundred;
	firhundred=firhundred*500;
	money = money-firhundred;
	
	hundred = money/100;
	hundredtotal = hundred;
	hundred=hundred*100;
	money = money-hundred;
	
	fifty = money/50;
	fiftytotal = fifty;
	fifty=fifty*50;
	money = money-fifty;
	
	twenty = money/20;
	twentytotal = twenty;
	twenty=twenty*20;
	money = money-twenty;
	
	printf ("Banknotes one thousand : %d \nBanknotes five hundred : %d \nBanknotes hundred : %d \nBanknotes fifty : %d \nBanknotes twenty : %d \nscrap : %d",thousandtotal,firhundredtotal,hundredtotal,fiftytotal,twentytotal,money);
}

