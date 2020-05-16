#include "../libft/libft.h"
#include "testft.h"

int main()
{
	for (int i = 0; i<100; i++)
	{
		printf("num: %d, char: %c, ft_toupper: %c, libc to_upper %c\n", i, i, ft_toupper(i), toupper(i));
	}

	return 0;
}