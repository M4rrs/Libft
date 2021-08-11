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

size_t	ft_strlcat(char	*dst, const char	*src, size_t	dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < dstsize)
		i++;
	while (src[j] && (i + j < dstsize - 1))
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i != dstsize)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

int main()
{
    char a[100] = "abcdefghijklmno";
    char b[100] = "pqrstuvwxyz";

	printf("%lu\n", ft_strlcat(a, b, 32));
    printf("%s", a);
    return (0);
}