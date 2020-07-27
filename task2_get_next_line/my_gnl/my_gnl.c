#include "libft.h"
#include "my_gnl.h"
#include <fcntl.h>
#include <unistd.h>

#define buf_size 3
static char read_buf[buf_size + 1];
static char *print_buf;
static size_t pos = 0;
static int is_eof = 0;
static int read_amount;
static int last_nl = -2;

size_t	ft_linelen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\n' && s[i] != TERM && s[i] != EOF)
		i++;
	return (i);
}

char		*ft_linedup(const char *src, int start_pos, int pos_finish)
{
	size_t		len;
	char	*new;

	len = ft_linelen(src + start_pos);
	if (len > pos_finish)
		len = pos_finish;

	new = malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	ft_strlcpy(new, src + start_pos, len + 1);

	return (new);
}


int	ft_strchr_pos(const char *s, char c, size_t pos_start)
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
	size_t		len;

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

int get_next_line(int fd, char **line)
{
	if (last_nl == -2)
	{
		read_buf[buf_size] = TERM;
		print_buf = ft_strdup("");
		read_buf[0] = TERM;
	}
	last_nl = ft_strchr_pos(print_buf, NL, pos);
	while (last_nl == NO_NL && !is_eof)
	{
		read_amount = read(fd, read_buf, buf_size);
		if (read_amount < buf_size)
			is_eof = 1;
		print_buf = ft_strjoin_s2(print_buf, read_buf, pos, read_amount);
		last_nl = ft_strchr_pos(print_buf, NL, last_nl+1);
		pos = 0;
	}

	if (is_eof && last_nl == -1)
		return -1;
	*line = ft_linedup(print_buf, pos, last_nl);
	pos = last_nl + 1;
	return 0;
}

int main(int argc, char *argv[])
{
	int fd = open("test2.txt", O_RDONLY);
	if (fd < 0)
		return (1);
	char *line;

	while (get_next_line(fd, &line) >= 0)
	{
		ft_putstr_fd(line, 0);
		ft_putstr_fd("_\n", 0);
	}
}