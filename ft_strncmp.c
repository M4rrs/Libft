#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char	*s1, const char	*s2, size_t	n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' && s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++ ;
	}
	return (0);
}

int	main(void)
{	
	char	*a = "Hiroki";
	char	*b = "HirokI";
	char	*c = "Hiroki";
	char	*d = "HirokI";

	printf("%d\n", strncmp(a, b, 6));
    printf("%d", ft_strncmp(c, d, 6));
}
