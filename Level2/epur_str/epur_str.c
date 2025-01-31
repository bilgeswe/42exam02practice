#include <unistd.h>
#include <stdlib.h>

int     len_str(char *str)
{
        int     leng;
	
	leng = 0;
        while (str[leng])
        {
                leng++;
        }
        return (leng);
}

void	epur_str(char *str)
{
	int		i = 0;
	int		j = 0;
	char	*new;

    new = (char *)malloc(len_str(str) + 1);
	if (!new)
		return;

	while (str[i] == ' ' || str[i] == '\t')
		i++;

	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t')
			new[j++] = str[i];
		else if (str[i + 1] != ' ' && str[i + 1] != '\t' && str[i + 1] != '\0')
			new[j++] = ' '; 
		i++;
	}

	new[j] = '\0';
	write(1, new, j);
	free(new);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		epur_str(av[1]);
	write(1, "\n", 1);
	return (0);
}