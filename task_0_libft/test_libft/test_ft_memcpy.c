#include "testft.h"

void test()
{

}

int main()
{
	const char s[] = "hello";
	char dst[] = "     ";
	char *dst = "       ";

//	void *s1 = (void *)s;
//	void *s2 = (void *)dst;
//
//	printf("`%s` `%s`\n", s, dst);
	ft_memcpy(dst, s, 3);
//	printf("`%s` `%s`\n", s, dst);

//	dst = "     ";
//	memcpy(dst, s, 3);
	printf("`%s` `%s`\n", s, dst);

	return 0;
}