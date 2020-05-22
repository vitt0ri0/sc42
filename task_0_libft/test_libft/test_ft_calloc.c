#include "testft.h"
#include <limits.h>

int main()
{
	size_t i;
	i = 0;

	i = 4294967296;
	printf("%lu\n", i);
	i++;
	printf("%lu\n", i);

	i = 8589934592;
	printf("%lu\n", i);


	while (i < 40)
	{
		printf("%d %lu\n", i * i);
	}

	return 0;
}