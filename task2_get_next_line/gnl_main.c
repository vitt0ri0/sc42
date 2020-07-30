#include <fcntl.h>
#include "gnl/get_next_line.h"
#include "my_gnl/libft.h"

int test_file(int fd)
{
	if (fd < 0)
		return (200);

	char *line;
	int res = 0;
	while ((res = get_next_line(fd, &line)) > 0)
	{
		ft_putstr_fd(line, 0);
		ft_putstr_fd("_\n", 0);
	}
	return res;
}

int main(int argc, char *argv[])
{

	int fd = 0;
	if (argc > 1)
		fd = open(argv[1], O_RDONLY);


//	fd = open("my_gnl/tests/main1.c", O_RDONLY);
	fd = 0;

	int ret;
	char *line;

	line = 0;
	ret = get_next_line(fd, &line);
	while (ret > 0) {
		write(1, line, ft_strlen(line));
		write(1, "\n", 1);
		free(line);
		line = 0;
		ret = get_next_line(fd, &line);
	}
	if (ret == 0) {
		write(1, line, ft_strlen(line));
		write(1, "\n", 1);
		free(line);
		line = 0;
	}

	return 0;
}