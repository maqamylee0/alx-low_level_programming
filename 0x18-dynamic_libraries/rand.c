#include <stdio.h>

int rand()
{
	static int c = 0;

	c++;
	switch (c)
	{
		case 1:
			return 9;
			break;
		case 2:
			return 8;
			break;
		case 3:
			return 10;
			break;
		case 4:
			return 24;
			break;
		case 5:
			return 75;
			break;
		case 6:
			return 9;
			break;
		default:
			return 1;
	}
}
