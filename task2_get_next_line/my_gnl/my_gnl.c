#include "libft.h"
#include "my_gnl.h"
#include <fcntl.h>
#include <unistd.h>

#define buf_size 10
static char read_buf[buf_size + 1];
static char *print_buf;
static size_t *print_buf_size;

static size_t pos = 0;
static char *buf2;
static int is_eof = 0;
static int read_amount;
static int new_line = 0;



size_t	ft_linelen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\n' && s[i] != TERM && s[i] != EOF)
		i++;
	return (i);
}

size_t check_eof(const char *s, size_t pos)
{
	if (s[pos] == EOF)
		return 1;
	return 0;
}

char		*ft_linedup(const char *src, size_t pos_finish)
{
	size_t		len;
	char	*new;

	len = ft_linelen(src);
	if (len > pos_finish)
		len = pos_finish;

	new = malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	ft_strlcpy(new, src, len + 1);

	return (new);
}


size_t	ft_strchr_pos(const char *s, char c, size_t pos_start)
{
	int		i;
	int		len;

	i = pos_start;
	len = ft_strlen(s);

	while (i <= len)
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (NO_NL);
}

char	*ft_strjoin_s2(char *s1, const char *s2, size_t start_pos, size_t finish_pos)
{
	int		i;
	int		j;
	char	*ss;
	size_t		len;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	ss = (char*)malloc(sizeof(char) * (len + 1));
	if (!ss)
		return (NULL);
	while (s1[j] != TERM)
		ss[i++] = s1[j++];
	j = start_pos;
	while (s2[j] != TERM || j == finish_pos)
	{
		ss[i] = s2[j++];
		i++;
	}
	ss[i] = TERM;

	free(s1);

	s1 = ss;

	return s1;
}

int get_next_line(int fd, char **line)
{
	int last_nl = ft_strchr_pos(print_buf, NL, pos);

	while (last_nl == NO_NL)
	{
		read_amount = read(fd, read_buf, buf_size);

		print_buf = ft_strjoin_s2(print_buf, read_buf, pos, last_nl);

		last_nl = ft_strchr_pos(read_buf, NL, last_nl + 1);
	}

	*line = ft_linedup(print_buf, last_nl);
	pos = last_nl + 1;

	return 0;
}

int main(int argc, char *argv[])
{
	int fd = open("test.txt", O_RDONLY);
	if (fd < 0){
		return (1);
	}
	char *line;

	read_buf[buf_size] = TERM;
	buf2[0] = TERM;
	read_buf[0] = TERM;

	// todo debug
	read_amount = read(fd, read_buf, buf_size);

	while (read_amount > 0)
	{
		get_next_line(fd, &line);
		ft_putstr_fd(line, 0);
		ft_putstr_fd("\n", 0);
	}
}