#include "testft.h"

void test(const char *s, int start, int stop) {
	char *res = ft_substr(s, start, stop);
	printf("`%s` | `%s`\n", s, res);
}

int main() {
	char *s = "hello";

	test("hello", 2, 3);
	test("a sailor went to sea", 10, 15);

	test("hello", 4, 100);
	test("hello", 5, 100);
	test("hello", 10, 20);

	return 0;
}