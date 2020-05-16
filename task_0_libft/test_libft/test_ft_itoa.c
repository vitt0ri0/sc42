#include "testft.h"

void test(int n)
{
	char *res = ft_itoa(n);
	printf("%d | %s\n", n, res);
}

//void test(int n)
//{
//	int len = count_len(n);
//	printf("%d | %d\n", n, len);
//}

int main()
{
	test(1);
	test(0);
	test(2);
	test(9);
	test(-1);
	test(-2);
	test(-9);
	test(10);
	test(-10);
	test(123);
	test(1234567);
	test(-1234567);
//	test(2147483648);
	test(2147483647);
	test(-2147483647);
	test(-2147483648);
	return 0;
}
