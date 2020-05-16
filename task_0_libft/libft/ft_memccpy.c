#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((t_uchar *)(dst + i)) = *((t_uchar *)(src + i));
		if (*((t_uchar *)(src + i)) == (t_uchar)c)
			return (void *)(src + i + 1);
		i++;
	}
	return NULL;
}