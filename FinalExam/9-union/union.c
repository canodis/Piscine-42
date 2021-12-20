#include <unistd.h>

int checkdoubles(char harf, char* dizi, int pos)
{
	int i;

	i = 0;
	while (i < pos)
	{
		if (harf == dizi[i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	ft_union(char* dizi1, char* dizi2)
{
	int i;
	int a;

	a = 0;
	i = 0;
	while (dizi1[i])
	{
		if (checkdoubles(dizi1[i], dizi1, i) == 1)
			write(1, &dizi1[i], 1);
		i++;
	}

	while (dizi2[a])
	{
		if (checkdoubles(dizi2[a], dizi1, i) == 1)
			write(1, &dizi2[a], 1);
		a++;
		i++;
	}
}

int main(int argc, char** argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
}