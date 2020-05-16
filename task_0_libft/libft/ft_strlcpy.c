#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;

	if (dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	while (i + 1 < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	dst[dstsize] = TERM;
	return (ft_strlen(src));
}