#include <stdio.h>

int rand()
{
	static int c = 0;

	c++;
	switch (c)
	{
		case 1:
			return 0;
		case 2:
			return 0;
		case 3:
			return 0;
		case 4:
			return 9;
		case 5:
			return 23;
		case 6:
			return (9 - 1);
		default:
			return 1;
	}
}
