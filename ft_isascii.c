#include <ctype.h>
#include <stdio.h>

int	ft_isascii(int	c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

int	main(void)
{
	printf("%d\n", isascii('0'));
	printf("%d\n", ft_isascii('0'));
	return (0);
}
