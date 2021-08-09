#include "libft.h"

char	*ft_strchr(const char	*s, int	c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (*s == c)
		return ((char *)s);
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>

int	main()
{
	const	char	*a = "welcome to the bre\nad bank we sell bread we sell l9oafs. we got bread on deck, bread on the floor, TOASTED.";
	const char c = 'D';

	printf("%s\n\n", strchr(a, c));
	printf("%s\n", ft_strchr(a, c));
}*/