#include "testft.h"

void test(const char *source, int c, int n)
{
	char dest[] = "          ";
	void *res = ft_memccpy(dest, source, c, n);
	char r = '!';
	if (res == NULL)
		res = (t_uchar *)&r;
	printf("`%s` `%s` num:%d | char:%c | char_res:%c\n", source, dest, n, c, *((t_uchar*)res));
}

int main()
{
	const char s[] = "hello";
	const char s1[] = "";

	test(s, ' ', 3);
	test(s, ' ', 5);
	test(s, ' ', 10);
	test(s, ' ', 0);

	test(s1, ' ', 5);
	test(s, 'h', 5);
	test(s, 'o', 10);
	test(s, 'l', 5);

	return 0;
}