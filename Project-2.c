#include<stdio.h>
#include<conio.h>

main()

{
	 int bs,hra,da,ta,;
	 
	 printf("enter your base salary:\n");
     scanf("%d",hra);
     printf("enter your hra:\n");
	 scanf("%d",da);
	 printf("enter your da:\n");
	 scanf("%d",ta);
	 printf("enter your ta:\n");
	 scanf("%d",ta);
	 
	 hra = hra*bs/100;
	 da = da*bs/100;
	 ta =ta*bs/100;
	 
	 gs = bs+hra+da+ta;
	 printf("your gross salary:%.2",gs);
	 getch();
} 