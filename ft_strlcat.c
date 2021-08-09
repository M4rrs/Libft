#include "libft.h"

size_t	ft_strlcat(char	*dst, const char	*src, size_t	dstsize)
{

}

int main()
{
    char a[100] = "abcdefghijklmno";
    char b[100] = "pqrstuvwxyz";

	printf("%lu\n", ft_strlcat(a, b, 32));
    printf("%s", a);
    return (0);
}
