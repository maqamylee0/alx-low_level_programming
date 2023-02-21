#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * _islower - method to check lower case
 * @c: character to check
 * Description: print alphabet
 * Return:  1 if lower case, 0 if not
 */

int _islower(int c)
{
if (c <= 122 && c >= 97)
return (1);
else
return (0);
}