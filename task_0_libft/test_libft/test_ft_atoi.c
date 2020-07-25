#include "testft.h"

//2222222222222222222222


void test(char *n)
{
	int res = ft_atoi(n);
	printf("%s | %d\n", n, res);
}

//void test(int n)
//{
//	int len = count_len(n);
//	printf("%d | %d\n", n, len);
//}

int main()
{
	test("1");
	test("0");
	test("-0");
	test("2");
	test("9");
	test("-1");
	test("-2");
	test("-9");
	test("10");
	test("-10");
	test("123");
	test("1234567");
	test("-1234567");
	test("2147483647");
	test("-2147483647");
	test("-2147483648");
//	test("9223372036854775808");
//	test("9223372036854775807");
//	test("-9223372036854775808");
//	test("-9223372036854775807");
	return 0;
}