#include <stdio.h>
#include <stdlib.h>
void hy(void)
{
	int a, b;
	for (a = 0; a < 1024; a++)
	{
		if ((a % 3) ==0 || (a % 5) == 0)
		{
			b += a;
		}
	}
printf("%d\n",b);
}

int main(void)
{
	hy();
}

