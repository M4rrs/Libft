#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <stdlib.h>

void	*ft_memcpy(void	*dest, const void	*src, size_t	n)
{
	size_t			i;
	char			*d;
	char			*s;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

void	*ft_memmove(void	*dest, const void	*src, size_t	n)
{
	char	*s;
	char	*d;

	s = (char *)src;
	d = (char *)dest;
	if (!s && !d)
		return (NULL);
	if (s < d)
		while (n--)
			d[n] = s[n];
	else
		ft_memcpy(d, s, n);
	return (dest);
}

int	main()
{
	char a[30] = "Hello my name is mars";
	char b[30] = "Hello my name is mars";

	printf("%s\n", a);
	memmove(a, a + 7, 8);
	printf("%s\n", a);

	printf("%s\n", b);
	ft_memmove(b, b + 7, 8);
	printf("%s\n", b);
}
