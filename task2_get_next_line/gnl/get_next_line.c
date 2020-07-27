#include "libft.h"
#include <unistd.h>

int get_next_line(int fd, char **line)
{
	int buf_size = 10;
	char c[10];
	read(fd, &c, 10);

	*line = ft_strdup(buf);

}