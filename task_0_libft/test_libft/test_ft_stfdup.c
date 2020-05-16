#include "../libft/ft_strdup.c"
#include <stdio.h>


void test_strlen(char *str)
{
	int len = ft_strlen(str);
	printf("%s %d\n", str, len);
}

void test_strcpy(char *src)
{
	char dest[256] = "foo";
	ft_strcpy(dest, src);
	printf("%s %s\n", src, dest);
}

void test_strdup(char *str)
{
	char *new;
	new = ft_strdup(str);
	printf("%s %s\n", str, new);
}

int		main()
{
	printf("TEST ft_strlen:\n");
	test_strlen("hello");
	test_strlen("hello world");
	test_strlen("");
	test_strlen("1");
	printf("\n");

	printf("TEST ft_strcpy:\n");
	test_strcpy("hello");
	test_strcpy("kinda hard\tpiscine\ttour\nHERE");

	printf("TEST ft_strdup:\n");
	test_strdup("hello world");
	test_strdup("my\ttest...\nis the best");

	return 0;
}
