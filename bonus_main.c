#include <stdio.h>
#include <limits.h>
#include "srcs/ft_printf.h" // pathを合わせる
#include "libft/libft.h" // pathを合わせる

int	main(void)
{
	int	st;
	int	ft;

	printf("minus\n"); // left justified
	st = printf("(st)%-9x %-10x %-11x %-12x %-13x %-14x %-15x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ft = ft_printf("(ft)%-9x %-10x %-11x %-12x %-13x %-14x %-15x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("(st)%d\n", st);
	printf("(ft)%d\n", ft);

	printf("zero\n"); // zero padding
	st = printf("(st)%09x %010x %011x %012x %013x %014x %015x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ft = ft_printf("(ft)%09x %010x %011x %012x %013x %014x %015x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("(st)%d\n", st);
	printf("(ft)%d\n", ft);

	printf("dot\n"); // default -> zero padding
	st = printf("(st)%.9x %.10x %.11x %.12x %13.x %14.x %15.x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ft = ft_printf("(ft)%.9x %.10x %.11x %.12x %13.x %14.x %15.x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("(st)%d\n", st);
	printf("(ft)%d\n", ft);

	printf("sharp\n"); // add 0x
	st = printf("(st)%#x %#x %#x %#x %#x %#x %#x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ft = ft_printf("(ft)%#x %#x %#x %#x %#x %#x %#x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("(st)%d\n", st);
	printf("(ft)%d\n", ft);

	printf("space\n"); // positive value -> add space
	st = printf("(st)% d % d % d % d % d % d % d\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ft = ft_printf("(ft)% d % d % d % d % d % d % d\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("(st)%d\n", st);
	printf("(ft)%d\n", ft);

	printf("plus\n"); // positive value -> add plus
	st = printf("(st)%+d %+d %+d %+d %+d %+d %+d\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ft = ft_printf("(ft)%+d %+d %+d %+d %+d %+d %+d\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("(st)%d\n", st);
	printf("(ft)%d\n", ft);

	printf("mix\n");
	st = printf("(st)%-10x %010x %.10x %#x % d %+d\n", 42, 42, 42, 42, 42, 42);
	ft = ft_printf("(ft)%-10x %010x %.10x %#x % d %+d\n", 42, 42, 42, 42, 42, 42);
	printf("(st)%d\n", st);
	printf("(ft)%d\n", ft);

	return(0);
}
