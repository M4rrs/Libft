#include "libft.h"

void	ft_putnbr_fd(int	n, int	fd)
{
	if (n >= 0 && n <= 9)
		ft_putchar_fd(n + '0', fd);
	else if (n < 0 && n > -214783648)
	{
		ft_putchar_fd("-", fd);
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
