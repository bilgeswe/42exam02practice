#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	snake_to_camel(char *str)
{
	int		i;
	int		j;
	char	*new;

	i = 0;
	j = 0;
	new = (char *) malloc(ft_strlen(str) + 1);
	if (!new)
		return ;
	while (str[i])
	{
		if (str[i] == '_')
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
				new[j++] = str[i++] - 32;
		}
		else
			new[j++] = str[i++];
	}
	new[j] = '\0';
	write(1, new, j);
	free(new);
	return ;
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		snake_to_camel(argv[1]);
	write(1, "\n", 1);
}