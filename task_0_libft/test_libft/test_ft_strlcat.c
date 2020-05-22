

#include "testft.h"

void test(char *s1, const char *s2)
{
	printf("...`%s` `%s`...\n", s1, s2);
	int res = ft_strlcat(s1, s2, 18);
	printf("`%s` %d\n", s1, res);
}

int main()
{
	char s[] = "hel                        ";
	s[3] = TERM;
	test(s, " lo");
	char s1[] = "a sailor                  ";
	s1[8] = TERM;
	test(s1, " went to sea");
	char s2[] = "h                ";
	test(s2, " world");

	return 0;
}