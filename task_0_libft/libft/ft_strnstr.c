#include "libft.h"

static int	ft_strncmp_mod(const char *s1, const char *s2, size_t len)
{
	size_t i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < len)
		i++;
	if (s2[i] == TERM)
		return (*s1 - *s2);
	else
		return 1;
}

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	int		n;
	char 	*res;

	res = NULL;
	i = 0;
	j = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (haystack[i] != TERM && i < len)
	{
		if (haystack[i] == needle[0])
		{
			n = ft_strncmp_mod(haystack + i, needle + j, len - i);
			if (!n)
				return ((char *)haystack + i);
		}
		i++;
	}
	return (res);
}