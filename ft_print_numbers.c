#include <unistd.h>

void	print_numbers(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	i;

	i = 0;
	while (i <= 9)
	{
		print_numbers((char)i + '0');
		i++;
	}
}
