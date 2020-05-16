#include "../libft/libft.h"

void test(const char *s, int assert_len)
{
	char *is_ok = "!!!";  //no
	int res = ft_strlen(s);
	if (res==assert_len)
		is_ok = "...";
	printf("%s | %s | %d == %d\n", is_ok, s, res, assert_len);
}

int main()
{
	test("hello", 5);
	test("", 0);
	test(" ", 1);
	test("fdsafl;dsjafkl;djsafkl;djsakfl;jdskal;", 38);
}