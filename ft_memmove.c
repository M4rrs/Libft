#include "libft.h"

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
