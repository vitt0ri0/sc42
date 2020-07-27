#include "get_next_line.h"

#define buf_size 100
static char read_buf[buf_size + 1];
static char *print_buf;
static size_t pos = 0;
static int is_eof = 0;
static int last_nl = -2;


char	*ft_linedup(const char *src, int start_pos, int pos_finish)
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

int get_next_line(int fd, char **line)
{
	size_t	line_len;
	int		read_amount;

	if (last_nl == -2)
	{
		read_buf[buf_size] = TERM;
		print_buf = ft_linedup("", 0, 1);
		read_buf[0] = TERM;
	}
	last_nl = ft_strchr_pos(print_buf, NL, pos);
	while (last_nl == NO_NL && !is_eof)
	{
		read_amount = read(fd, read_buf, buf_size);
		if (read_amount == -1)
			return -1;
		if (read_amount < buf_size)
			is_eof = 1;
		print_buf = ft_strjoin_s2(print_buf, read_buf, pos, read_amount);
		if (!print_buf)
			return -1;
		last_nl = ft_strchr_pos(print_buf, NL, last_nl+1);
		pos = 0;
	}

	if (is_eof && last_nl == -1)
		return -1;
	*line = ft_linedup(print_buf, pos, last_nl);
	line_len = last_nl - pos;
	if (!*line)
		return -1;
	pos = last_nl + 1;
	return line_len;
}