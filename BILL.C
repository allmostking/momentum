#include<stdio.h>
#include<conio.h>
main()
{
	int sc,a,sum,total_bill;
	clrscr();
	printf("Enter your unit=");
	scanf("%d",&a);
	if (a<=50)
	{
		sum=a*0.50;
	}
	else if (a<=150)
	{
		sum=(a-50)*0.75+25;
	}
	else if (a<=250)
	{
		sum=(a-150)*1.20+100;
	}
	else
	{
		sum=(a-250)*1.50+220;
	}
	sc= sum*20/100;
	printf("Your sc is =%d",sc);
	total_bill=sum+sc;
	printf("\nYour total bill is = %d",total_bill);
	getch();
}
