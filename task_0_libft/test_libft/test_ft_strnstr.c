#include "testft.h"

void test(const char *s1, const char *s2, size_t len)
{
	char *res = ft_strnstr(s1, s2, len);
	if (!res)
		res = "!";
	printf("%s | %s | %lu %c\n", s1, s2, len, res[0]);
}

//void test_compare(const char *s1, const char *s2, size_t len)
//{
//	int res = ft_strncmp(s1, s2, len);
//	printf("%s | %s | %lu %d\n", s1, s2, len, res);
//}

int main()
{
	char *s = "hello";

//	test_compare(s, "hello", 5);
//	test_compare(s, "hello", 6);
//	test_compare(s, "hello", 3);
//	test_compare(s, "hello", 4);

//	test(s, "", 10);
//	test(s, "h", 10);
	test(s, "a", 10);
	test(s, "fuck", 10);
	test(s, "ll", 10);
	test(s, "o", 10);
	test(s, "o", 4);
	test(s, "o", 5);

	return 0;
}
