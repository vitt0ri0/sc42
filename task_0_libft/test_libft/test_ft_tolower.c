#include "../libft/libft.h"
#include "testft.h"

int main()
{
	for (int i = 0; i<128; i++)
	{
		printf("num: %d, char: %c, ft_lower: %c, libc to_lower %c\n", i, i, ft_tolower(i), tolower(i));
	}

	return 0;
}