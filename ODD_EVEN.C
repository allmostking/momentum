#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	clrscr();
	printf("Enter your number=");
	scanf("%d",&a);
	if (a%2==0)
	{
		printf("%d is even number",a);

	}
	else
	{
		printf("%d is odd number",a);
	}
	getch();

}