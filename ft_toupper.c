int	ft_toupper(int	c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/*#include <ctype.h>
#include <stdio.h>
int	main()
{
	char c = 'A';
	printf("%c\n", toupper(c));
	c = 'a';
	printf("%c\n", toupper(c));
	c = '9';
	printf("%c\n", toupper(c));
	c = '.';
	printf("%c\n", toupper(c));
	c = '\0';
	printf("%c\n\n", toupper(c));
	c = 'A';
	printf("%c\n", ft_toupper(c));
	c = 'a';
	printf("%c\n", ft_toupper(c));
	c = '9';
	printf("%c\n", ft_toupper(c));
	c = '.';
	printf("%c\n", ft_toupper(c));
	c = '\0';
	printf("%c\n", ft_toupper(c));
	return (0);
}*/
