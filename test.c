#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlen(const char	*s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrchr(const char	*s, int	c)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = ft_strlen((char *)s);
	/*if (str[i] == c)
		return ((char *)&str[i]);*/
	while (i >= 0)
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i--;
	}
	return (NULL);
}

int main()
{
	const char *a = "Hey hi hello yeah whats up my oh me amor";
	char b = '\0';

	printf("%s", ft_strrchr(a, b));
}