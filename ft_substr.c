#include "libft.h"

char	*ft_substr(char const	*s, unsigned int	start, size_t	len)
{
	unsigned int				i;
	char						*str;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup('\0'));
	else if ((len + start) >= ft_strlen(s))
		len = ft_strlen(s) - start;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		str[i] = str[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
