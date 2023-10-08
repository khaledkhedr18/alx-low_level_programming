#include <stdio.h>
/**
 * main - Entry point
 * Description: print alphabet in lowercase
 * Return: Always 0
*/

int main(void)
{
<<<<<<< HEAD
	char letters = 'a';

	while (letters >= 'a' && letters <= 'z')
	{
	putchar(letters);
	letters++;
	}
	putchar('\n');
	return (0);
}
=======
    char letters = 'a';

    while( letters == 'a' && letters <= 'z' )
    {
        putchar(letters);
        putchar('\n');
        letters++;
    }
    return (0);
}
>>>>>>> 9f1658ef8fb07167960c848d1d1d626d6e3d160b
