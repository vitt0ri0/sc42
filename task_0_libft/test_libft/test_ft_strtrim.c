#include "testft.h"

void test(char *s1, char *set)
{
	char *ss = ft_strtrim(s1, set);
	printf("`%s`, `%s`\n", s1, ss);
}

int main()
{
	test("abchelloabc", "abc");
	test("  jfjffj    ", " ");
	test("", " ");
	test(" ", " ");
	test("", "hello");
	test("", "");
	test("ababa", "abc");
	test("abcfabc", "abc");

	return 0;
}