#include "get_next_line.h"

#define BUFFER_SIZE 10

char	*ft_linedup(const char *src, int start_pos, int pos_finish)
{
	int		len;
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

int loop_read(char **print_buf, char (*read_buf)[BUFFER_SIZE+1], int *last_nl, int *is_eof, int *pos, int fd)
{
	int		read_amount;

	*last_nl = ft_strchr_pos(*print_buf, NL, *pos);
	while (*last_nl == NO_NL && !*is_eof)
	{
		read_amount = read(fd, *read_buf, BUFFER_SIZE);
		if (read_amount == -1)
			return -1;
		if (read_amount < BUFFER_SIZE)
			*is_eof = 1;
		*print_buf = ft_strjoin_s2(*print_buf, *read_buf, *pos, read_amount);
		if (!*print_buf)
			return -1;
		*last_nl = ft_strchr_pos(*print_buf, NL, *last_nl+1);
		*pos = 0;
	}
	return 0;

}

int get_next_line(int fd, char **line)
{
	static int is_eof = 0;
	static char read_buf[BUFFER_SIZE + 1];
	static char *print_buf;
	static int last_nl = -2;
	static int pos = 0;

	if (last_nl == -2)
	{
		read_buf[BUFFER_SIZE] = TERM;
		print_buf = ft_linedup("", 0, 1);
		read_buf[0] = TERM;
	}
	fd = loop_read(&print_buf, &read_buf, &last_nl, &is_eof, &pos, fd);
	if (fd == -1)
		return -1;
	if (is_eof && last_nl == -1) {
		*line = ft_linedup("", 0, 1);
		return 0;
	}
	*line = ft_linedup(print_buf, pos, last_nl);
	if (!*line)
		return -1;
	pos = last_nl + 1;
	return 1;
}
