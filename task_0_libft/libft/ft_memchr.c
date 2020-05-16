#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((t_uchar *)s)[i] == (t_uchar)c)
			return (t_uchar *)(s + i);
		i++;
	}
	return (NULL);
}