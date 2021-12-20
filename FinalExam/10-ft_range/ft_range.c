int ft_abs(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}

int *ft_range(int min, int max)
{
	int *dizi;
	int lenght;
	int i;

	i = 0;
	lenght = abs(max - min) + 1;
	dizi = malloc(sizeof(int) * lenght);
	if (min == max)
		return (0);
	while (i < lenght)
	{
		if (min > max)
		{
			dizi[i] = min - i;
		}
		else if (min < max)
		{
			dizi[i] = min + i;
		}
		i++;
	}
	return (dizi);

}