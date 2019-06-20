int		max(int *tab, unsigned int len)
{
	int	max;

	if (!len)
		return (0);
	max = tab[--len];
	while (len--)
		if (tab[len] > max)
			max = tab[len];
	return (max);
}

int		main(int argc, char **argv)
{
	int i = 5;
	int array[5] = {1, 2.0, 3, 7.0, 50.0};

	int x;
	x = max(array, i);

	printf("%d", x);
}
