

char	*ft_strchr(const char *s, int c)
{
	char	*res;
	int		i;
	int		len;

	i = 0;
	res = NULL;
	len = ft_strlen(s);
	while (i <= len)
	{
		if (s[i] == (char)c)
		{
			res = (char *)s + i;
			break ;
		}
		i++;
	}
	return (res);
}