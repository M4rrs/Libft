#include "libft.h"

static size_t	wordcount(char const	*s, char	c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			count += 1;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

char	**ft_split(char const	*s, char	c)
{
	char	**res;
	size_t	i;
	size_t	j;
	size_t	k;

	if (!s)
		return (0);
	i = 0;
	k = 0;
	res = (char	**)malloc(sizeof(s) * wordcount(s, c) + 1);
	if (!res)
		return (0);
	while (s[i] && k < wordcount(s, c))
	{
		j = 0;
		while (s[i] == c)
			i++;
		while (s[i + j] != c && s[i + j])
			j++;
		res[k] = (char	*)malloc(sizeof(s) * (j + 1));
		ft_strlcpy(res[k++], &s[i], j + 1);
		i += j;
	}
	res[k] = "\0";
	return (res);
}

/*i think my notes for this shi was pretty complicated. its saved in your
whiteboard btw.*/
