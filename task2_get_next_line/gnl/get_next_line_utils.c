#include "get_next_line.h"

size_t	ft_linelen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\n' && s[i] != TERM)
		i++;
	return (i);
}

size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != TERM)
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;

	if (dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && i + 1 < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = TERM;
	return (ft_strlen(src));
}


int		ft_strchr_pos(const char *s, char c, size_t pos_start)
{
	int		i;
	int		len;

	i = pos_start;
	if (!s)
		return (NO_NL);
	len = ft_strlen(s);

	while (i <= len)
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (NO_NL);
}

char	*ft_strjoin_s2(char *s1, const char *s2, int start_pos, int finish_pos)
{
	int		i;
	int		j;
	char	*ss;
	int		len;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = start_pos;

	len = ft_strlen(s2);
	if (len > finish_pos)
		len = finish_pos;
	len += ft_strlen(s1 + start_pos);

	ss = (char*)malloc(sizeof(char) * (len + 1));
	if (!ss)
		return (NULL);
	while (s1[j] != TERM)
		ss[i++] = s1[j++];
	j = 0;
	while (s2[j] != TERM && j < finish_pos)
	{
		ss[i] = s2[j++];
		i++;
	}
	ss[i] = TERM;
	free(s1);
	return ss;
}


