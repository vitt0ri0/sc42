#include <fcntl.h>
#include "gnl/get_next_line.h"
#include "my_gnl/libft.h"

int test_file(int fd)
{
	if (fd < 0)
		return (200);

	char *line;
	int res = 0;
	while ((res = get_next_line(fd, &line)) >= 0)
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

//	int fds[5];
//	fds[0] = open("my_gnl/tests/test.txt", O_RDONLY);
//	fds[1] = open("my_gnl/tests/test2.txt", O_RDONLY);
//	fds[2] = open("my_gnl/tests/test3.txt", O_RDONLY);
//	fds[3] = open("my_gnl/tests/test_1kb.txt", O_RDONLY);
//
//	for (int i = 0; i < 4; i++)
//	{
//		test_file(0);
//	}
	test_file(fd);
	return 0;
}