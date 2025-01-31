int	max(int *tab, unsigned int len)
{
	int	i;
	int	maxnum;

	if (!len)
		return(0);
	i = 0;
	maxnum = tab[0];
	while (len > i)
	{
		if (tab[i] > maxnum)
			maxnum = tab[i];
		i++;
	}
	return (maxnum);
}
