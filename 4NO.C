#include<stdio.h>
#include<conio.h>
main()
{
	int a=50,b=20,c=30,d=10;

	clrscr();
	if (a>b)
	{
		if(a>c)
		{
			if (a>d)
			{
				printf("A is max");

			}
			else
			{
				printf("D is max");
			}

		}
		else
		{
			if(c>b)
			{
				if(c>d)
				{
					printf("C is max");

				}
				else
				{
					printf("D is max");
				}
			}
			else
			{
				if(b>d)
				{
				       printf("B is max");
				}
				else
				{
					printf("D is max");
				}
			}

		}
	}
	else
	{
		if(c>b)
		{
			if (c>a)
			{
				if (c>d)
				{
					printf("C is max");

				}
				else
				{
					printf("D is max");
				}

			}
			else
			{
				printf("A is max");
			}
		}
		else
		{
			if (c>d)
			{
				printf("C is max");
			}
			else
			{
				if(d>a)
				{
					printf("D is max");
				}
				else
				{
					printf("A is max");
				}
			}
		}
	}
	getch();
}