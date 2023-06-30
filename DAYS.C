#include<stdio.h>
#include<conio.h>
main()
{
	char a;
	clrscr();
	printf("Press M for Monday\n");
	printf("Press T for Tuesday\n");
	printf("Press W for Wednesday \n");
	printf("Press t for Thuesday\n");
	printf("Press F for Friday\n");
	printf("Press S for Saturday\n");
	printf("Press s for Sunday\n");
	printf("Enter your choice=");
	scanf("%c",&a);
	switch(a)
	{
		case 'M':
			printf("Monday");
			break;
		case 'T':
			printf("Tuesday");
			break;
		case 'W':
			printf("Wednesday");
			break;
		case 't':
			printf("Thuesday");
			break;
		case 'F':
			printf("Friday");
			break;
		case 'S':
			printf("Saturday");
			break;
		case 's':
			printf("Sunday");
			break;
		default:
			printf("Wrong choice");
	}
	getch();
}
