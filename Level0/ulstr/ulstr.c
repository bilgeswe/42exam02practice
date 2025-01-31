#include <unistd.h>

void	ulstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] += 32;
		else if (str[i] > 96 && str[i] < 123)
			str[i] -= 32;
		write(1, &str[i], 1);
		i++;
	}
	return ;
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ulstr(argv[1]);
	write(1, "\n", 1);
}