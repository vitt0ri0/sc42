#include "testft.h"

int count_words(char const *s, char c);
int word_len(char const *s, int c, int start);

static void	test_count(const char *s, int c)
{
	int res = count_words(s, c);
	printf("`%s` %d\n", s, res);
}

static void	test_len(const char *s, int c, int start)
{
	int res = word_len(s, c, start);
	printf("`%s` %d\n", s, res);
	c = 0;
}


void print_strings(const char **strings)
{
	int i = 0;
	while (strings[i])
	{
		ft_putstr_fd((char *)strings[i], 1);
		ft_putchar_fd('\n', 1);
		i++;
	}
}

void test_print_strings()
{
	int len = 5;
	char **strings;

	strings = malloc(sizeof(char **) * (len + 1));
	strings[0] = "hello";
	strings[1] = "world";
	strings[2] = "brave";
	strings[3] = "new";
	strings[4] = NULL;

	print_strings((const char **)strings);
}

void test(const char *s, char delim)
{
	char **res = ft_split(s, delim);

}

void	test_ft_split(const char *str, int delim)
{
	char **res = ft_split(str, delim);
	print_strings((const char **)res);
}

int main()
{
//	test_count("a b", ' ');
//	test_count("a  b", ' ');
//	test_count("aa bb ", ' ');
//	test_count("aa bb     ", ' ');
//	test_count(" aa bb     ", ' ');
//	test_count("     aa bb     ", ' ');
//	test_count("hello world one ", ' ');

//	test_len("hello world one ", ' ', 0);
//	test_len("   hello world one ", ' ', 0);
//	test_len("   hello world one ", ' ', 3);
//	test_len("   hello worldd one ", ' ', 9);
//	test_len("hell", ' ', 0);
//	test_len("hell   ", ' ', 0);

//	test_print_strings();
	test_ft_split("hey hello   fuck world sc21 the best", ' ');
//	printf("\n");
	test_ft_split("", ' ');
	test_ft_split("", 0);

	return 0;
}
