#include<stdio.h>
#include<conio.h>
main()
{
	char c;
	clrscr();
	printf("Enter your char=");
	scanf(" %c",&c);
	if (c>= '0' && c<= '9')
	{
		printf("Your char is digit");
	}
	else if (c>= 'a' && c<= 'z')

	{
		printf("Your char is alphabate");
	}
	else if (c>='A' && c<='Z')
	{
		printf("Your char is alphabate");

	}
	else
	{
		printf("Your char is sepical symbole");
	}
	getch();
}