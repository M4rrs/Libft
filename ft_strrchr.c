#include "libft.h"

char	*ft_strrchr(const char	*s, int	c)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = ft_strlen((char *)s);
	while (i >= 0)
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i--;
	}
	return (NULL);
}