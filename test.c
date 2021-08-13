#include <stdio.h>
#include <string.h>
#include "libft.h"

int		ft_memcmp(const void	*s1, const void	*s2, size_t	n)
{
	size_t	i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while ((str1[i] || str2[i]) && i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

int	main()
{
	char *a = "Jello";
	char *b = "Hello";
	char *c = "Jello";
	char *d = "Hello";

	printf("%d\n", ft_memcmp(a, b, 3));
	printf("%d", memcmp(c, d, 3));
}