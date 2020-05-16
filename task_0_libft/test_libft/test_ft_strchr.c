#include "../libft/libft.h"

void test_first(const char *s, int located_char, char *assert_res)
{
	char *is_ok = "!!!";  //no
	char *res = ft_strchr(s, located_char);
	if (res==assert_res)
		is_ok = "...";
	printf("%s | %s | %c \n", is_ok, s, located_char);
}

void test_last(const char *s, int located_char, char *assert_res)
{
	char *is_ok = "!!!";  //no
	char *res = ft_strrchr(s, located_char);
	if (res==assert_res)
		is_ok = "...";
	printf("%s | %s | %c \n", is_ok, s, located_char);
}

int main()
{
	char *s = "a man a man hello";
	int len = ft_strlen(s);
	test_first(s, 'a', s);
	test_first(s, 'm', s+2);
	test_first(s, '\0', s + len);

	printf("\n");
	test_last(s, '\0', s + len);
	test_last(s, 'l', s + len - 2);

	test_nth(s, 'l', s + len - 2);
	test_nth(s, 'a', s + 3)
}