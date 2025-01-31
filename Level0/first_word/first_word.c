#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	first_word(char *str)
{
	while ((*str == ' ') || (*str == '\t'))
		str++;
	while (*str && !(*str == ' ') || (*str == '\t'))
		ft_putchar(str++);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		first_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}