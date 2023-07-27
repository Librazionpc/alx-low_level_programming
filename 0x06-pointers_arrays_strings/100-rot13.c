#include <stdio.h>
#include "main.h"
/**
 * rot13 - Function for cipher encoding letter
 *
 * @wrd: Funtion the message from C
 *
 * Return: The encoded message or unencoded
 */
char *rot13(char *wrd)
{
	int a = 0;

	while (wrd[a] != '\0')
	{
		while ((wrd[a] >= 'a' && wrd[a] <= 'z') || (wrd[a] >= 'A' && wrd[a] >= 'Z'))
		{
			if ((wrd[a] >= 'a' && wrd[a] <= 'm') || (wrd[a] <= 'A' && wrd[a] <= 'M'))
				wrd[a] += 13;
			else
				wrd[a] -= 13;
			a++;
		}
		a++;
	}
	return (wrd);
}


