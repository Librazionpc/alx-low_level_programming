#include <stdio.h>

int main(int argc, char *argv[])
{
	/* To argument where passed */
	if (argc == 2)
	{
		printf("Hy %s, welcome %s\n", argv[1], argv[0]);
	}
	else 
		printf("%s says Sorry, try again later\n", argv[0]);
	return (0);
}
