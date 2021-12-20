int	ft_atoi(const char *str)
{
	int i;
	int pn;
	int res;
	
	pn = 1;
	res = 0;
	i = 0;
	while (str[i] >= 9 && str[i] <= 13 || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			pn *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = (res*10) + (str[i] - 48);
		i++;
	}
	return (res*pn);
}