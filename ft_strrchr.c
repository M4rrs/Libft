#include "libft.h"

char	*ft_strrchr(const char	*s, int	c)
{
	size_t	i;

	i = ft_strlen(s);
	if (s[i] == c)
		return ((char *)s);
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)s);
		i--;
	}
	return (NULL);
}

#include <stdio.h>
#include <string.h>

int	main()
{
	const	char	*a = "welcome to the bre\nad bank we sell bread we sell l9oafs. we got bread on deck, bread on the floor, TOASTED.";
	const char c = 'd';

	printf("%s\n\n", strrchr(a, c));
	printf("%s\n", ft_strchr(a, c));
}