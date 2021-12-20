char    *ft_strrev(char *str)
{
	int leng;
	int i;
	char bucket;

	i = 0;
	leng = 0;
	while (str[leng])
		leng++;
	while (i < leng/2)
	{
		bucket = str[i];
		str[i] = str[leng -1 -i];
		str[leng -1 -i] = bucket;
		i++;
	}
	return (str);
}
