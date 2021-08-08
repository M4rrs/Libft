int	ft_tolower(int	c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

//#include <ctype.h>
//#include <stdio.h>
//int	main()
//{
//	char c = 'A';
//	printf("%c\n", tolower(c));
//	c = 'a';
//	printf("%c\n", tolower(c));
//	c = '9';
//	printf("%c\n", tolower(c));
//	c = '.';
//	printf("%c\n", tolower(c));
//	c = '\0';
//	printf("%c\n\n", tolower(c));
//	c = 'A';
//	printf("%c\n", ft_tolower(c));
//	c = 'a';
//	printf("%c\n", ft_tolower(c));
//	c = '9';
//	printf("%c\n", ft_tolower(c));
//	c = '.';
//	printf("%c\n", ft_tolower(c));
//	c = '\0';
//	printf("%c\n", ft_tolower(c));
//	return (0);
//}
