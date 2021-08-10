#include "libft.h"
#include <stdio.h>
#include <string.h>

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
	size_t	len_d;
	size_t	len_s;

	i = ft_strlen(dst);
	j = 0;
	len_d = ft_strlen(dst);
	len_s = ft_strlen(src);
	while (src[j] != '\0' && i < dstsize - 1)
	{
		dst[i + j] = src[j];
		j++;
 	}
	 dst[i + j] = '\0';
	 return (len_s + len_d);
}

int main()
{
    char a[100] = "abcdefghijklmno";
    char b[100] = "pqrstuvwxyz";

	printf("%lu\n", ft_strlcat(a, b, 32));
    printf("%s", a);
    return (0);
}
