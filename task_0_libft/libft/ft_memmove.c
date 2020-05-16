#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (!len || dst==src)
		return (dst);
	if (dst > src)
		while (len--)
			((t_uchar *)dst)[len] = ((t_uchar *)src)[len];
	else
		while (i < len)
		{
			((t_uchar *) dst)[i] = ((t_uchar *) src)[i];
			i++;
		}
	return (dst);
}