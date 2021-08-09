#include "libft.h"

int	ft_isalnum(int	c)
{
	int	alpha;
	int	num;

	alpha = 0;
	num = 0;
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		alpha = 1;
	if (c >= '0' && c <= '9')
		num = 1;
	return (alpha || num);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("%d\n", isalnum('\n'));
	printf("%d", ft_isalnum('\n'));

	return (0);
}*/
