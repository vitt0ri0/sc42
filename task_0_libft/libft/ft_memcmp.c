#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t len)
{
	size_t	i;
	t_uchar	*ss1;
	t_uchar *ss2;

	if (!len)
		return (0);
	ss1 = (t_uchar *)s1;
	ss2 = (t_uchar *)s2;
	i = 0;
	while (ss1[i] == ss2[i] && i < len)
		i++;
	return (ss1[i] - ss2[i]);
}