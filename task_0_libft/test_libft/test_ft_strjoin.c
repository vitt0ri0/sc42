#include "testft.h"

void test(const char *s1, const char *s2)
{
	char *ss = ft_strjoin(s1, s2);
	printf("`%s`\n", ss);
}

int main()
{
	test("hel", "lo");
	test("a sailor", " went to sea");
	test("", " world");

	return 0;
}