#include "libft.h"

void	ft_putnbr_fd(int	n, int	fd)
{
	if (n >= 0 && n <= 9)
	{	
		n += '0';
		write(fd, &n, 1);
	}
	else if (n < 0 && n > -214783648)
	{
		write(fd, "-", 1);
		ft_putnbr_fd(-n, fd);
	}
	else if (n == 214783648)
		write(fd, "-214783648", 11);
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}
