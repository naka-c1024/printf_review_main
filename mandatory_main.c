#include <stdio.h>
#include <limits.h>
#include "../srcs/ft_printf.h" // pathを合わせる
#include "../libft/libft.h" // pathを合わせる

int	main(void)
{
	int	st;
	int	ft;
	char	*a = "tottoko";
	char	*b = "hamutarou";
	// char	*str;
	printf("c----------------\n");
	st = printf("(st)%c %c %c %c\n", '0', 0, 'a', INT_MIN);
	ft = ft_printf("(ft)%c %c %c %c\n", '0', 0, 'a', INT_MIN);
	printf("(st)%d\n", st);
	printf("(ft)%d\n", ft);

	printf("s----------------\n");
	st = printf("(st)%s %s %s %s %s\n", "", a, NULL, b, "abc\0def");
	ft = ft_printf("(ft)%s %s %s %s %s\n", "", a, NULL, b, "abc\0def");
	printf("(st)%d\n", st);
	printf("(ft)%d\n", ft);

	printf("p----------------\n");
	st = printf("(st)%p %p %p\n", "", NULL, INT_MIN);
	ft = ft_printf("(ft)%p %p %p\n", "", NULL, INT_MIN);
	printf("(st)%d\n", st);
	printf("(ft)%d\n", ft);

	printf("d----------------\n");
	st = printf("(st)%d %d %d\n", 0, INT_MAX, INT_MIN);
	ft = ft_printf("(ft)%d %d %d\n", 0, INT_MAX, INT_MIN);
	printf("(st)%d\n", st);
	printf("(ft)%d\n", ft);

	printf("i----------------\n");
	st = printf("(st)%i %i %i\n", 0, INT_MAX, INT_MIN);
	ft = ft_printf("(ft)%i %i %i\n", 0, INT_MAX, INT_MIN);
	printf("(st)%d\n", st);
	printf("(ft)%d\n", ft);

	printf("u----------------\n");
	st = printf("(st)%u %u %u %u %u %u\n", 0, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX);
	ft = ft_printf("(ft)%u %u %u %u %u %u\n", 0, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX);
	printf("(st)%d\n", st);
	printf("(ft)%d\n", ft);

	printf("x----------------\n");
	st = printf("(st)%x %x %x %x %x\n", 0, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX);
	ft = ft_printf("(ft)%x %x %x %x %x\n", 0, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX);
	printf("(st)%d\n", st);
	printf("(ft)%d\n", ft);

	printf("X----------------\n");
	st = printf("(st)%X %X %X %X %X\n", 0, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX);
	ft = ft_printf("(ft)%X %X %X %X %X\n", 0, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX);
	printf("(st)%d\n", st);
	printf("(ft)%d\n", ft);

	printf("%%----------------\n");
	st = printf("(st)%% %%%%\n");
	ft = ft_printf("(ft)%% %%%%\n");
	printf("(st)%d\n", st);
	printf("(ft)%d\n", ft);

	printf("random-----------\n");
	st = printf("(st)%c %s %p %d %i %u %x %X %%\n", 'z', "hoge", 42, 42, 42, 42, 42, 42);
	ft = ft_printf("(ft)%c %s %p %d %i %u %x %X %%\n", 'z', "hoge", 42, 42, 42, 42, 42, 42);
	printf("(st)%d\n", st);
	printf("(ft)%d\n", ft);

	// str = (char *)malloc((size_t)INT_MAX + 1);
	// ft_memset(str, 'a', (size_t)INT_MAX);
	// str[(size_t)INT_MAX] = '\0';
	// printf("[number]%d\n", printf("%s\n%s\n", str, str));
	// ft_printf("[number]%d\n", ft_printf("%s\n%s\n", str, str));
	// ./a.out | grep number > file
}
